import os
import sys
import re
import platform

reserved = {
    'static': 'STATIC',
    'virtual': 'VIRTUAL',
    '@interface': 'CLASS',
    '@end': 'END'
}

tokens = ['ASSIGN','ADDRESS','IDENT','LPAREN','RPAREN', 'WHITESPACE', 'SEMI', 'COMMA', 'COLON', 'NUM', 'VOLATILE', 'VOLATILEDATA'] + list(reserved.values())

states = (
    ('volatile','exclusive'),
)

returns = {}
consts = {}
statics = {}
returns2 = {}

with open(os.path.dirname(__file__) + "/libcocos2d.demangled.txt") as f:
    for m in re.finditer(r"(?:\w+?: )(?:virtual )?(static )?(.+)__\w+ (.+)\(.+\)(const )?\n", f.read()):
        static, ret, func, const = m.group(1) is not None, m.group(2).replace("BOOL", "bool").replace("class ", "").replace("enum ", "").replace("struct ", "").replace("virtual ", "").replace(" *", "*").replace(" &", "&").replace("std::basic_string<char,std::char_traits<char>,std::allocator<char> >", "std::string"), m.group(3), m.group(4) is not None
        returns[func] = ret[:-1]
        consts[func] = const
        statics[func] = static

implements = set()
for root, dirs, files in os.walk(os.path.dirname(__file__) + "/../../include"):
    for name in filter(lambda x: x[-2:] == ".h", files):
        with open(os.path.join(root, name), "r") as h:
            try:
                data = h.read()
                for clm in re.finditer(r"class CC_DLL (\w+)[^$]+?{([^$]+?)\n};", data):
                    cl, content = clm.group(1), clm.group(2)
                    for funm in re.finditer(r"(?:inline )?(?:virtual )?(?:static )?(\w[\w* &]+?) (\w+)\(.*\)( const)?\s*{", content):

                        ret, fun = funm.group(1), funm.group(2)
                        implements.add("cocos2d::" + cl + "::" + fun)
                        implements.add("cocos2d::extension::" + cl + "::" + fun)

                    for funm in re.finditer(r"(?:inline )?(?:virtual )?(?:static )?(\w[\w* &]+?) (\w+)\(.*\)( const)?\s*", content):

                        ret, fun = funm.group(1), funm.group(2)
                        returns2["cocos2d::" + cl + "::" + fun] = ret
                        returns2["cocos2d::extension::" + cl + "::" + fun] = ret
                    # print("@end", cl, "\n")
            except:
                pass
                # print("error", os.path.join(root, name))


class FunkyInfo:
    def __init__(self):
        self.args = []
        self.name = ''
        self.addr = None
        self.static = False
        self.virtual = False
        self.func = True
        self.mang = None
        self.ret = ''
        self.thunk = None
        self.clash = False
        self.volatile = False
        self.data = None
        self.parent = None
    def getMangles(self):
        if self.name == "":
            return None
        # if self.mang is not None:
        #     return syms[int(self.mang)][1][:-1]
        # return None
        try:
            n = f"{self.parent.name}::{self.name}({','.join(self.args)})".replace(" ", "").replace("const", "").replace("cocos2d::SEL_SCHEDULE", "").replace("cocos2d::SEL_MenuHandler", "")
            return [a[1] for a in filter(lambda x: n == x[0], syms[self.parent.name])]
        except ValueError:
            # print(syms2[self.parent.name])
            # print("errored", repr(self))
            return None

    def getReturn(self):
        if self.ret != "void":
            return self.ret
        if f"{self.parent.name}::{self.name}" in returns:
            if f"{self.parent.name}::{self.name}" in implements:
                return "ğ"
            else:
                return returns[f"{self.parent.name}::{self.name}"]
        elif f"{self.parent.name}::{self.name}" in returns2:
            return returns2[f"{self.parent.name}::{self.name}"]
        else:
            return self.ret

    def getConst(self):
        if f"{self.parent.name}::{self.name}" in consts:
            return consts[f"{self.parent.name}::{self.name}"]
        else:
            return False

    def getStatic(self):
        if f"{self.parent.name}::{self.name}" in statics:
            return statics[f"{self.parent.name}::{self.name}"]
        else:
            return self.static

    def __repr__(self):
        return f"<{f'method with mangle {self.mang}' if self.func else 'member'} {'static ' if self.static else ''}{'virtual ' if self.static else ''}{self.ret} {self.name}{'(' + ', '.join(self.args) + ')' if self.func else ''} at address {self.addr}{f' with thunk offset {self.thunk}' if self.thunk is not None else ''}>"

class FunkyClass:
    def __init__(self, name):
        self.name = name
        self.base = []
        self.infos = []
    def methodsWithName(self, name):
        return filter(name == i.name for i in self.infos)
    def __repr__(self):
        entries = '\n'.join([str(repr(a)) for a in self.infos])
        return f"<class {self.name} derived from {', '.join(self.base)}> entries \n{entries}"

t_ASSIGN = r"="
t_ADDRESS = r"0x[0-9a-fA-F]+"
t_NUM = r"[0-9]+"
t_LPAREN = r"\("
t_RPAREN = r"\)"
t_SEMI = r";"
t_COMMA = r","
t_COLON = r":"
t_ignore_WHITESPACE = r"[\s\t]"
t_ignore_COMMENT = r'//.*'

def t_VOLATILE(t):
    r"volatile"
    t.lexer.begin('volatile')
    return t

t_volatile_VOLATILEDATA = r".+"

def t_IDENT(t):
    r'[a-zA-Z_@~.][:a-zA-Z0-9_&\[\]\*/+\-=%<>.]*'
    if t.value == "volatile":
        return t_VOLATILE(t)
    t.type = reserved.get(t.value,'IDENT')
    return t

def t_newline(t):
    r'\n+'
    t.lexer.lineno += t.value.count("\n")

def t_error(t):
    # print("error!", t)
    raise ValueError("yeah it errored")

def t_volatile_error(t):
    # print("error!", t)
    raise ValueError("yeah it errored")

import ply.lex as lex
lexer = lex.lex()

syms = {}
syms2 = {}
syms3 = {}

if platform.system() == "Darwin":
    functionsFile = os.path.dirname(__file__) + "/../macos/functions.txt"
else:
    raise UnimplementedError

with open(functionsFile, "r") as f:
    s = f.readlines()
    for k, m in zip(s[0::2], s[1::2]):
        k = k.replace(" ", "").replace("void(cocos2d::CCObject::*)(cocos2d::CCObject*)", "").replace("void(cocos2d::CCObject::*)(float)", "").replace("const", "").replace("std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string> > >", "std::map<std::string, std::string>")

        t = k.split("::")
        ke = t[0]
        if ke == "cocos2d":
            ke += "::" + t[1]

        if ke == "cocos2d::extension":
            ke += "::" + t[2]

        if ke not in syms:
            syms[ke] = []
        syms[ke].append((k[:-1], m[:-1]))

def ensure_next():
    tt = lexer.token()
    if not tt:
        raise ValueError("EOF when parsing")
    return tt

def parse_func(tok):
    fi = FunkyInfo()
    if tok.type == "VOLATILE":
        fi.volatile = True
        tok = ensure_next()
        fi.data = tok.value[1:]
        lexer.begin('INITIAL')
        return fi
    if tok.type == "STATIC":
        fi.static = True
        tok = ensure_next()
    if tok.type == "VIRTUAL":
        fi.virtual = True
        tok = ensure_next()
    retlist = []
    while tok.type not in ["LPAREN", "ASSIGN", "SEMI"]:
        if tok.type not in ["IDENT", "COMMA"]:
            raise ValueError("bad type / name")
        if tok.type == "COMMA":
            retlist[-1] += tok.value
        else:
            retlist.append(tok.value)
        tok = ensure_next()

    # if len(retlist) < 2 and retlist[0][0] != "~":
    #     raise ValueError("not enough type / name")

    fi.ret = " ".join(retlist[:-1])
    fi.name = retlist[-1]
    fi.name = fi.name.replace('m_', '')
    if tok.type == "ASSIGN":
        # member variable
        tok = ensure_next()
        if tok.type != "ADDRESS":
            raise ValueError("Expected address")
        fi.addr = tok.value
        tok = ensure_next()

    if tok.type == "SEMI":
        # member variable
        fi.func = False
        return fi

    elif tok.type == "LPAREN":
        # member function
        arglist = []
        while 1:
            tok = ensure_next()
            if tok.type == "RPAREN":
                fi.args.append(" ".join(arglist))
                arglist = []
                break
            if tok.type == "COMMA":
                fi.args.append(" ".join(arglist))
                arglist = []
                continue
            if tok.type != "IDENT":
                print(tok.value)
                raise ValueError("bad type")
            arglist.append(tok.value)

        tok = ensure_next()
        if tok.type == "IDENT":
            tok = ensure_next()
        if tok.type == "ASSIGN":
            tok = ensure_next()
            if tok.type != "ADDRESS":
                raise ValueError("Expected address")
            fi.addr = tok.value
            tok = ensure_next()
            if tok.type == "COMMA":
                tok = ensure_next()
                if tok.type != "NUM":
                    raise ValueError("Expected num")
                fi.thunk = tok.value
                tok = ensure_next()
                # if tok.type == "COMMA":
                #     tok = ensure_next()
                #     if tok.type != "NUM":
                #         raise ValueError("Expected num")
                #     fi.thunk = tok.value
                #     tok = ensure_next()
        if tok.type != "SEMI":
            raise ValueError("Expected semicolon")
        return fi
    else:
        raise ValueError("Expected semicolon or function definition")

def parse_class(funky_classes):
    tok = ensure_next()
    if tok.value in funky_classes:
        fc = funky_classes[tok.value]
    else:
        fc = FunkyClass(tok.value)
    tok = ensure_next()

    if tok.type == "COLON":
        while 1:
            tok = ensure_next()
            if tok.type != "IDENT":
                raise ValueError("bad base class")
            fc.base.append(tok.value)
            tok = ensure_next()
            if tok.type != "COMMA":
                break
    while 1:
        if tok.type == "END":
            return fc
        fi = parse_func(tok)
        fi.parent = fc
        fc.infos.append(fi)
        tok = ensure_next()



def parse(*files):
    funky_classes = {}
    for f in files:
        lexer.input(open(f,"r").read())     
        while 1:
            tok = lexer.token();
            if not tok:
                break
            if tok.type == "CLASS":
                fc = parse_class(funky_classes)
                funky_classes[fc.name] = fc 
    return funky_classes

def write(file, funky_classes):
    with open(file, "w") as f:
        for name, cl in funky_classes.items():
            f.write(f"@interface {cl.name}")
            if len(cl.base) > 0:
                f.write(" : ")
                f.write(", ".join(f"{b}" for b in cl.base))
            f.write('\n')
            for info in cl.infos:
                static = "static " if info.static else ""
                virtual = "virtual " if info.virtual else ""
                ret = info.ret
                name = info.name
                addr = info.addr
                if info.volatile:
                    f.write(f"    volatile {info.data}\n")
                elif info.func:
                    param = ', '.join(info.args)
                    mang = info.mang
                    thunk = info.thunk
                    if info.clash:
                        f.write('// ')
                    if ret == '':
                        f.write(f"    {name}({param}) = {addr}, {mang};\n")
                    elif addr is not None and thunk is not None:
                        f.write(f"    {static}{virtual}{ret} {name}({param}) = {addr}, {thunk};\n")
                    elif addr is not None:
                        f.write(f"    {static}{virtual}{ret} {name}({param}) = {addr};\n")
                    else:
                        f.write(f"    {static}{virtual}{ret} {name}({param});\n")
                else:
                    if addr is not None:
                        f.write(f"    {static}{virtual}{ret} m_{name} = {addr};\n")
                    else:
                        f.write(f"    {static}{virtual}{ret} m_{name};\n")
            f.write(f"@end\n\n")


# d = parse("cinnamon.mm")
# write("caccopy.mm", d)

import os
import re
import sys

funcs = {}
exist = {}

if "cactest.mm" not in sys.argv[1]:
    with open(sys.argv[1], "r") as f:
        while True:
            l = f.readline()
            if not l:
                break
            cl = l[11:-1]
            exist[cl] = []
            l = f.readline()
            if not l:
                break
            while l != "@end\n":
                exist[cl].append(l)
                l = f.readline()
                if not l:
                    break
            l = f.readline()
            if not l:
                break

    with open(sys.argv[2], "r") as f:
        data = f.read()
        for m in re.finditer(r"; (?:cocos2d::)?(?:extension::)?([^(?:non)].+?)::(.+?)\((.*)\)(?: const)?\ndefit.+?, (0x[0-9a-f]+)", data):
            cl, fun, param, add, ret = m.group(1), m.group(2), m.group(3), m.group(4), "void"
            param = param.replace("void (cocos2d::CCObject::*)(cocos2d::CCObject*)", "SEL_CallFuncO").replace("void (cocos2d::CCObject::*)(float)", "SEL_SCHEDULE")
            #fuck it hardcoding
            if (
                "~" == fun[0] 
                or cl == "cocos2d"
                or cl in [fun, "fmt", "FMOD", "pugi"] 
                or "..." in param 
                or "std::map" in param 
                or "__va_list" in param 
                or "operator" in fun): 
                continue

            if fun == "create":
                ret = f"{cl}*"
            if fun == "init":
                ret = "bool"

            if cl not in funcs:
                funcs[cl] = []
            funcs[cl].append((fun, param, add, ret))

    with open(sys.argv[1], "w") as f:
        for cl in funcs:
            f.write(f"@interface {cl}\n")
            for fun, param, add, ret in funcs[cl]:
                static = "static " if fun == "create" else ""
                if cl in exist:
                    for l in exist[cl]:
                        if f"{fun}({param}) = {add};\n" in l:
                            f.write(l)
                            break
                    else:
                        f.write(f"    {static}{ret} {fun}({param}) = {add};\n")
                else:
                    f.write(f"    {static}{ret} {fun}({param}) = {add};\n")
            f.write(f"@end\n\n")

reserved = {
    'static': 'STATIC',
    'virtual': 'VIRTUAL',
    'const': 'CONST',
    '@interface': 'CLASS',
    '@end': 'END'
}

tokens = ['ASSIGN','ADDRESS','IDENT','LPAREN','RPAREN', 'WHITESPACE', 'SEMI', 'COMMA'] + list(reserved.values())

class FunkyInfo:
    def __init__(self):
        self.args = []
        self.static = False
        self.virtual = False
        self.ret = ''
    def __repr__(self):
        return f"<method {'static ' if self.static else ''}{self.ret} {self.name}({', '.join(self.args)}) at address {self.addr}>"

class FunkyClass:
    def __init__(self, name, infos = []):
        self.name = name
        self.infos = infos
    def __repr__(self):
        return f"<class {self.name}>\n entries {self.infos}"

t_ASSIGN = r"="
t_ADDRESS = r"0x[0-9a-fA-F]+"
t_LPAREN = r"\("
t_RPAREN = r"\)"
t_SEMI = r";"
t_COMMA = r","
t_ignore_WHITESPACE = r"[\s\t]"
t_ignore_COMMENT = r'//.*'

def t_IDENT(t):
    r'[a-zA-Z_@][:a-zA-Z0-9_&\*<>]*'
    t.type = reserved.get(t.value,'IDENT')
    return t

def t_newline(t):
    r'\n+'
    t.lexer.lineno += t.value.count("\n")

def t_error(t):
    print("error!", t)
    raise ValueError("yeah it errored")


import ply.lex as lex
lexer = lex.lex()


lexer.input(open(sys.argv[1],"r").read())
def ensure_next():
    tt = lexer.token()
    if not tt:
        raise ValueError("EOF when parsing")
    return tt

def parse_func(curr_tok):
    last_tok = curr_tok
    fi = FunkyInfo()
    if curr_tok.type == "STATIC":
        fi.static = True
        curr_tok = ensure_next()
    if curr_tok.type == "VIRTUAL":
        fi.virtual = True
        curr_tok = ensure_next()
    if curr_tok.type == "CONST":
        fi.ret = "const "
        curr_tok = ensure_next()

    if curr_tok.type != "IDENT":
        raise ValueError("bad return")

    fi.ret += curr_tok.value

    curr_tok = ensure_next()
    if curr_tok.type != "IDENT":
        print(last_tok.value)
        raise ValueError("bad name")
    fi.name = curr_tok.value

    if ensure_next().type != "LPAREN":
        print(curr_tok.lineno)
        raise ValueError("no (")



    typeval = ""
    while 1:
        curr_tok = ensure_next()
        if curr_tok.type == "RPAREN":
            fi.args.append(typeval)
            typeval = ""
            break
        if curr_tok.type == "COMMA":
            fi.args.append(typeval)
            typeval = ""
            continue
        if curr_tok.type != "IDENT":
            print(curr_tok.value)
            raise ValueError("bad type")
        typeval += curr_tok.value + " "

    if ensure_next().type != "ASSIGN":
        raise ValueError("expected =")

    curr_tok = ensure_next()
    if curr_tok.type != "ADDRESS":
        raise ValueError("Expected address")
    fi.addr = curr_tok.value

    if ensure_next().type != "SEMI":
        raise ValueError("Expected semicolon")
    return fi


funky_classes = []

def parse_class():
    fc = FunkyClass(ensure_next().value)
    fc.infos = []
    while 1:
        next_tok = ensure_next()

        if next_tok.type == "END":
            return fc
        fc.infos.append(parse_func(next_tok))

while 1:
    tok = lexer.token();
    if not tok:
        break
    if tok.type == "CLASS":
        funky_classes.append(parse_class())


# yeah

starter_code = """//Copyright camila314 2021. Autogenerated using a python script
//please add meeeeee - alk1m123/altalk23
#include <Cacao.hpp>
using namespace cocos2d;
using namespace cocos2d::extension;
ModContainer* m;

#ifndef CAC_PROJ_NAME
#define CAC_PROJ_NAME "Default Cacao Project"
#endif

void __apply_hooks();
#define APPLY_HOOKS() static int const __cachook = (inject(), __apply_hooks(), 0)
#define $apply() APPLY_HOOKS()

#define CONCAT_(x, y) x##y
#define CONCAT(x, y) CONCAT_(x, y)
#define REDIRECT_(base, counter) CONCAT($hook, counter): public base<CONCAT($hook, counter)>
#define $redirect(base) REDIRECT_($##base, __COUNTER__)

typedef char const* c_string;

template <class F>
struct GetReturnType;

template <class K>
struct RemoveRef;

template <class R, class... A, class G>
struct GetReturnType<R (G::*)(A...)>
{
  typedef R type;
};

template <class M>
struct RemoveRef <M&>
{
    typedef M type;
};

#define cac_this (reinterpret_cast<RemoveRef<decltype(*this)>::type::__thistype>(this))

// REVIVAL!!!
template <class T>
inline long extract_virtual(T instance) {
    return (*reinterpret_cast<long*>(*reinterpret_cast<long*>(instance)+8));
};


template <typename F>
inline typename GetReturnType<F>::type (*extract(F func))() {
    return reinterpret_cast<typename GetReturnType<F>::type(*)()>(*reinterpret_cast<long*>(&func));
};

class $CacBase {
 public:
    virtual void apply_hooks() = 0; 
};

namespace __cackit {
  std::vector<$CacBase*> glob;  
}

void __apply_hooks() {
    for(auto& i : __cackit::glob) i->apply_hooks();
    if (__cackit::glob.size() > 0) m->enable();
}
"""

build_start = """

template<class D>
class ${cls} : public {cls}, public $CacBase {{
 public:
    ${cls}() {{
        if (!m)
            m = new ModContainer(CAC_PROJ_NAME);
        __cackit::glob.push_back(this);
    }}
    ~${cls}() {{}}
    typedef {cls}* __thistype;
"""

build_body1 = """
    {ret} {name}({params}) {{
        if (({ret}(${cls}::*)({params4})){{&${cls}::{name}}} != ({ret}(D::*)({params4})){{&D::{name}}})
            return reinterpret_cast<{ret}(*)(decltype(this){params2})>(m->getOriginal(getBase()+{addr}))(this{params3});
        else return {cls}::{name}({params5});
    }}
"""

build_body1_virtual = """
    {ret} {name}({params}) override {{
        if (({ret}(${cls}::*)({params4})){{&${cls}::{name}}} != ({ret}(D::*)({params4})){{&D::{name}}})
            return reinterpret_cast<{ret}(*)(decltype(this){params2})>(m->getOriginal(getBase()+{addr}))(this{params3});
        else return {cls}::{name}({params5});
    }}
"""

build_body1_static = """
    static {ret} {name}({params}) {{
        if (({ret}(*)({params4})){{&${cls}::{name}}} != ({ret}(*)({params4})){{&D::{name}}})
            return reinterpret_cast<{ret}(*)({params2})>(m->getOriginal(getBase()+{addr}))({params3});
        else return {cls}::{name}({params5});
    }}
"""

build_body2_start = """
    void apply_hooks() override {{
    m->registerHook(extract_virtual(this), +[](){{}});
"""
    

build_body2_body = """
        if (({ret}(${cls}::*)({params})){{&${cls}::{name}}} != ({ret}(D::*)({params})){{&D::{name}}})
            m->registerHook(getBase()+{addr}, extract(({ret}(D::*)({params})){{&D::{name}}}));
"""

build_body2_body_static = """
        if (({ret}(*)({params})){{&${cls}::{name}}} != ({ret}(*)({params})){{&D::{name}}})
            m->registerHook(getBase()+{addr}, ({ret}(*)({params})){{&D::{name}}});
"""

build_body2_end = "    }\n"
build_end = "};\n"

ender_code = ""

def build_cls(funky_cls):
    out = build_start.format(cls=funky_cls.name)

    for info in funky_cls.infos:
        if len(info.args) > 0:
            info.args = [a[:-1] for a in info.args]
        body1 = build_body1
        if info.static:
            body1 = build_body1_static
        elif info.virtual:
            body1 = build_body1_virtual
        out += body1.format(
            name=info.name,
            ret=info.ret,
            params= '' if info.args[0]=='' else ', '.join([f"{arg} p{i}"for i, arg in enumerate(info.args)]),
            cls=funky_cls.name,
            addr=info.addr, 
            params2 = '' if info.args[0]=='' else ('' if info.static else ', ') + ', '.join(info.args), 
            params3 = '' if info.args[0]=='' else ('' if info.static else ', ') + ', '.join([f"p{i}"for i, _ in enumerate(info.args)]),
            params4 = '' if info.args[0]=='' else ', '.join(info.args),
            params5 = '' if info.args[0]=='' else ', '.join([f"p{i}"for i, _ in enumerate(info.args)])
        )

    out += build_body2_start.format(cls=funky_cls.name)

    for info in funky_cls.infos:
        body2 = build_body2_body
        if info.static:
            body2 = build_body2_body_static
        out += body2.format(
            addr=info.addr, 
            ret=info.ret, 
            cls=funky_cls.name, 
            name=info.name, 
            params = ', '.join(info.args)
        )

    out += build_body2_end
    out += build_end
    return out
open(sys.argv[3], "w").write(starter_code + ''.join(build_cls(cl) for cl in funky_classes) + ender_code)

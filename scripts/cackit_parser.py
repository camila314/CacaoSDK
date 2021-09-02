tokens = ('CLASS','END','ASSIGN','ADDRESS','IDENT','LPAREN','RPAREN', 'WHITESPACE', 'SEMI', 'COMMA')

class FunkyInfo:
    def __init__(self, ret, args, name, addr):
        self.ret = ret
        self.args = args
        self.name = name
        self.addr = addr
    def __repr__(self):
        return f"<method {self.ret} {self.name}({', '.join(self.args)}) at address {self.addr}>"

class FunkyClass:
    def __init__(self, name, infos = []):
        self.name = name
        self.infos = infos
    def __repr__(self):
        return f"<class {self.name}>\n entries {self.infos}"


t_CLASS = r"@interface"
t_END = r"@end"
t_ASSIGN = r"="
t_ADDRESS = r"0x[0-9a-fA-F]+"
t_IDENT = r'[a-zA-Z_][:a-zA-Z0-9_&\*<>]*'
t_LPAREN = r"\("
t_RPAREN = r"\)"
t_SEMI = r";"
t_COMMA = r","
t_ignore_WHITESPACE = r"[\s\t]"
t_ignore_COMMENT = r'//.*'

def t_newline(t):
    r'\n+'
    t.lexer.lineno += t.value.count("\n")

def t_error(t):
    print("error!", t)
    raise ValueError("yeah it errored")


import ply.lex as lex
lexer = lex.lex()


lexer.input(open("cackit.cac","r").read())
def ensure_next():
    tt = lexer.token()
    if not tt:
        raise ValueError("EOF when parsing")
    return tt

def parse_func(curr_tok):
    last_tok = curr_tok
    if curr_tok.type != "IDENT":
        raise ValueError("bad return")
    fi = FunkyInfo(curr_tok.value, [], "", 0)

    curr_tok = ensure_next()

    if curr_tok.type != "IDENT":
        print(last_tok.value)
        raise ValueError("bad name")
    fi.name = curr_tok.value

    if ensure_next().type != "LPAREN":

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
ModContainer* m;

#ifndef CAC_PROJ_NAME
#define CAC_PROJ_NAME "Default Cacao Project"
#endif
#define CAC_HOOKS void __cacinj() __attribute__((constructor)); void __cacinj() {
#define END_CAC_HOOKS \\
    for(auto& i : __cackit::glob) {i->apply_hooks();};m->enable();}

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

template <typename F, class T>
inline typename GetReturnType<F>::type (*extract_virtual(T instance, F func))(T) {
    return reinterpret_cast<typename GetReturnType<F>::type(*)(T)>(*reinterpret_cast<long*>(*reinterpret_cast<long*>(instance)+*reinterpret_cast<long*>(&func)-1));
};


class $CacBase {
 public:
    virtual void apply_hooks() = 0; 
};

namespace __cackit {
  std::vector<$CacBase*> glob;  
}
"""

build_start = """

template <class $Derived>
class ${cls} : public $CacBase {{
 public:
    ${cls}() {{
        if (!m)
            m = new ModContainer(CAC_PROJ_NAME);
        __cackit::glob.push_back(this);
    }}
    typedef {cls}* __thistype;
"""

build_body1 = """
    virtual {ret} {name}({params}) {{
        return reinterpret_cast<{ret}(*)(decltype(this){params2})>(m->getOriginal(getBase()+{addr}))(this{params3});
    }}
"""

build_body2_start = """
    void apply_hooks() override {"""

build_body2_body = """
        if (({ret}($Derived::*)({params})){{&$Derived::{name}}} != ({ret}(${cls}::*)({params})){{&${cls}::{name}}})
            m->registerHook(getBase()+{addr}, extract_virtual(this, ({ret}(${cls}::*)({params})){{&${cls}::{name}}}));
"""

build_body2_end = "    }\n"
build_end = "};\n"

def build_cls(funky_cls):
    out = build_start.format(cls=funky_cls.name)

    for info in funky_cls.infos:
        if len(info.args) > 0:
            info.args = [a[:-1] for a in info.args]
        out += build_body1.format(name=info.name,ret=info.ret,params="" if info.args[0]=='' else ', '.join([f"{arg} p{i}"for i, arg in enumerate(info.args)]),cls=funky_cls.name,addr=info.addr, params2 = "" if info.args[0]=='' else f", {', '.join(info.args)}", params3 = "" if info.args[0]=='' else ", "+', '.join([f"p{i}"for i, _ in enumerate(info.args)]))

    out += build_body2_start

    for info in funky_cls.infos:
        out += build_body2_body.format(addr=info.addr, ret=info.ret, cls=funky_cls.name, name=info.name, params = ', '.join(info.args))

    out += build_body2_end
    out += build_end
    return out
open("../template/Cacao/include/CacKit", "w").write(starter_code + ' ' + ''.join(build_cls(cl) for cl in funky_classes))

from Shared import * 

classes = pickle.load(open(picklepath, "rb"))

build_start = """
template<class D>
class ${cl} : public {cl}, public InterfaceBase {{
public:
    static inline bool _init = false;
    ~${cl}() {{
        endDestructor();
    }}
    ${cl}() {{
        if (!_init) {{
            _init = true;
            _apply();
        }}
    }}
"""

build_body1 = """
    {type} {name}({params}) {const}{{
{function}
    }}
"""

build_body1_virtual = """
    {type} {name}({params}) {const}{{
{function}
    }}
"""

build_body1_static = """
    static {type} {name}({params}) {const}{{
{function}
    }}
"""

build_body2_start = """
    static void _apply() {{
        auto i = new D;
"""
    

build_body2_body = """
        using r{id} = {type};
        using a{id} = r{id}({cl}::*)({params}) {const};
        using c{id} = r{id}(${cl}::*)({params}) {const};
        using d{id} = r{id}(D::*)({params}) {const};
        if ((c{id}){{&${cl}::{name}}} != (d{id}){{&D::{name}}})
            m->registerHookEnable({offset}, FunctionScrapper::addressOfNonVirtual((d{id}){{&D::{name}}}));
"""

build_body2_body_static = """
        using r{id} = {type};
        using a{id} = r{id}(*)({params});
        using c{id} = r{id}(*)({params});
        using d{id} = r{id}(*)({params});
        if ((c{id}){{&${cl}::{name}}} != (d{id}){{&D::{name}}})
            m->registerHookEnable({offset}, FunctionScrapper::addressOfNonVirtual((d{id}){{&D::{name}}}));
"""

build_body2_body_virtual = """
        using r{id} = {type};
        using a{id} = r{id}({cl}::*)({params}) {const};
        using c{id} = r{id}(${cl}::*)({params}) {const};
        using d{id} = r{id}(D::*)({params}) {const};
        if ((c{id}){{&${cl}::{name}}} != (d{id}){{&D::{name}}})
            m->registerHookEnable({offset}, FunctionScrapper::addressOfVirtual(i, (d{id}){{&D::{name}}}));
"""

build_body2_end = """
        delete i;
    }\n"""
build_end = "};\n"

with open(os.path.join(os.path.dirname(__file__), "scrap", "libcocos2d.demangled.txt"), "r") as f2:
    accessSpecifier = {}
    for line in f2.readlines():
        match = re.search(r"(.+?):.+(cocos2d::.+?)\(", line)
        if match is not None:
            accessSpecifier[match.group(2)] = match.group(1)
    # im sorry

    def getAccessSpecifierOf(func):
        if func not in accessSpecifier:
            return "private"
        return accessSpecifier[func]



out = """// 
// Copyright camila314 & alk1m123 2021. 
// Autogenerated using a python script
//
#pragma once
#include <InterfaceBase.hpp>
#define dl decltype
#define dv std::declval
namespace Cacao::interface {
using namespace cocos2d;
using namespace cocos2d::extension;
"""

def getNamespace(name):
    return '::'.join(name.split('::')[:-1])

def stripNamespace(name):
    return name.split('::')[-1]

def isPublic(func):
    return getNamespace(getNamespace(func)) == "" or getAccessSpecifierOf(func) == "public"

for cl in classes:

    out += build_start.format(
        cl=stripNamespace(cl.name),
    )

    for i, info in enumerate(cl.info):
        if not isinstance(info, GenFunction):
            continue

        
        if info.declare.name in cl.name:
            info.declare.name = "constructor"
            info.declare.type = "void"
            if platform == "Android":
                continue
        elif '~' in info.declare.name:
            info.declare.name = "destructor"
            info.declare.type = "void"
            if platform == "Android":
                continue
        elif not isPublic(f"{cl.name}::{info.declare.name}"):
            continue

        body1 = build_body1
        if info.static:
            body1 = build_body1_static
        elif info.virtual:
            body1 = build_body1_virtual

        out += body1.format(
            name = info.declare.name,
            type = inheritReturn(info),
            cl = stripNamespace(cl.name),
            offset = info.getOffset(platform, i), 
            params = ', '.join(arg.getExpr(i) for i, arg in enumerate(info.parameters)),
            params2 = (', ' if not info.static and len(info.parameters) > 0 else "") + ', '.join(arg.getType(i) for i, arg in enumerate(info.parameters)),
            id = i,
            function = getFunctionImplementation(cl, info, i),
            const = "const " if info.const else "",
        )

    out += build_body2_start.format(cl=cl.name)

    for i, info in enumerate(cl.info):
        if not isinstance(info, GenFunction):
            continue

        if "constructor" == info.declare.name or "destructor" == info.declare.name:
            info.virtual = False
            info.static = False
            if platform == "Android":
                continue
        elif not isPublic(f"{cl.name}::{info.declare.name}"):
            continue
            
        body2 = build_body2_body
        if info.static:
            body2 = build_body2_body_static
        elif info.virtual:
            body2 = build_body2_body_virtual

        out += body2.format(
            name = info.declare.name,
            type = inheritReturn(info),
            cl = stripNamespace(cl.name),
            offset = info.getOffset(platform, i), 
            params = ', '.join(arg.getType(i) for i, arg in enumerate(info.parameters)),
            const = "const " if info.const else "",
            id = i,
            defaults = ', '.join(f"dv<{arg.getType(i)}>()" for i, arg in enumerate(info.parameters)),
        )

    out += build_body2_end
    out += build_end
    

out += """
#undef dl
#undef dv
} // namespace Cacao::interface
"""


with open(os.path.join(os.path.dirname(__file__), "..", "Interface.hpp"), "r") as f:
    if f.read() != out:
        with open(os.path.join(os.path.dirname(__file__), "..", "Interface.hpp"), "w") as f:
            f.write(out)

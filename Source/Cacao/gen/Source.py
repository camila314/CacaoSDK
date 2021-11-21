from Shared import * 

classes = pickle.load(open(picklepath, "rb"))

functionBody = """
getReturnOf({cl}, {name}, {defaults}) 
{cl}::{name}({params}) {const}{{
{function}
}}
"""

staticBody = """
getReturnOf({cl}, {name}, {defaults}) 
{cl}::{name}({params}) {const}{{
{function}
}}
"""

# functionBody = """
#     dl(dv<{cl}>().{name}({defaults})) {cl}::{name}({params}) {const}{{
# {function}
#     }}
# """

# staticBody = """
#     dl(dv<{cl}>().{name}({defaults})) {cl}::{name}({params}) {const}{{
# {function}
#     }}
# """



returnlessBody = """
{cl}::{name}({params}) {const}{{
{function}
}}
"""

out = """// 
// Copyright camila314 & alk1m123 2021. 
// Autogenerated using a python script
//
#include <Header.hpp>
#define dl decltype
#define dv std::declval
"""

i = 0
for cl in classes:
    if platform == "Android":
        continue
    for info in cl.info:
        if isinstance(info, str) and "cocos2d" in cl.name:
            out += "\n" + info.replace("\n    ", "\n") + "\n"
            continue
        if not isinstance(info, GenFunction):
            continue
        if platform == "Win32" and "cocos2d" in cl.name:
            continue

        body = functionBody
        if info.static:
            body = staticBody
        if not info.declare.type: # ctor or dtor
            body = returnlessBody

        out += body.format(
            name = info.declare.name,
            cl = cl.name,
            offset = info.getOffset(platform, i), 
            params = ', '.join(arg.getExpr(i) for i, arg in enumerate(info.parameters)),
            params2 = (', ' if not info.static and len(info.parameters) > 0 else "") + ', '.join(arg.getType(i) for i, arg in enumerate(info.parameters)),
            defaults = ', '.join(f"dv<{arg.getType(i)}>()" for i, arg in enumerate(info.parameters)),
            const = "const " if info.const else "",
            id = i,
            function = getFunctionImplementation(cl, info, i).replace("        ", "    "),
        )
        i += 1

out += """
#undef dl
#undef dv
"""

with open(os.path.join(os.path.dirname(__file__), "..", "Source.cpp"), "r") as f:
    if f.read() != out:
        with open(os.path.join(os.path.dirname(__file__), "..", "Source.cpp"), "w") as f:
            f.write(out)

 

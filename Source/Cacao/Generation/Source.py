from Shared import * 

classes = pickle.load(open("Cinnamon/cinnamon.pickle", "rb"))

functionBody = """
{type}{cl}::{name}({params}) {const}{{
    return reinterpret_cast<{type2}(*)({const}{cl}*{params2})>(base+{offset})(this{params3});
}}
"""

staticBody = """
{type}{cl}::{name}({params}) {{
    return reinterpret_cast<{type2}(*)({params2})>(base+{offset})({params3});
}}
"""

out = """#include <Header.hpp>
"""

for cl in classes:
    for info in cl.info:
        if not isinstance(info, CinnamonFunction):
            continue
        body = functionBody
        if info.static:
            body = staticBody
        if info.declare.name[1:] in cl.name:
            body = body.replace("return ", "")
        out += body.format(
            name = info.declare.name,
            type = f"{info.declare.type} " if info.declare.type else "",
            type2 = info.declare.type if info.declare.type else f"{cl.name}*",
            cl = cl.name,
            offset = info.offset, 
            params = ', '.join(arg.getExpr(i) for i, arg in enumerate(info.parameters)),
            params2 = (', ' if not info.static and len(info.parameters) > 0 else "") + ', '.join(arg.getType(i) for i, arg in enumerate(info.parameters)),
            params3 = (', ' if not info.static and len(info.parameters) > 0 else "") + ', '.join(arg.getName(i) for i, arg in enumerate(info.parameters)),
            const = "const " if info.const else "",
        )


with open("../Source.cpp", "w") as f:
    f.write(out)

import pickle
from Shared import * 

classes = pickle.load(open("cinnamon.pickle", "rb"))

classBody = """
class {cl} : {base} {{
public:
{body}}};
"""

functionBody = "    {static}{virtual}{type}{name}({params}){const};\n"
memberBody = "    {type}{name};\n"
offsetBody = "    {func}({type}, {name}, {offset});\n"

out = """#pragma once
#include <Base/HeaderBase.hpp>

"""
for cl in classes:
    out += f"class {cl.name};\n"

for cl in classes:
    body = ""
    for info in cl.info:

        if isinstance(info, CinnamonFunction):
            body += functionBody.format(
                static = "static " if info.static else "",
                virtual = "virtual " if info.virtual else "",
                type = f"{info.declare.type} " if info.declare.type else "",
                name = info.declare.name,
                params = ', '.join(p.type for p in info.parameters),
                const = " const" if info.const else "",
            )
        elif info.offset:
            body += offsetBody.format(
                func = "STRUCTPARAM" if info.declare.type in ["GameModes", "LevelDifficulty"] else "CLASSPARAM",
                type = info.declare.type,
                name = info.declare.name.replace('m_', ''),
                offset = info.offset,
            )
        else:
            body += offsetBody.format(
                type = info.declare.type,
                name = info.declare.name,
            )
    out += classBody.format(
        cl = cl.name,
        base = ", ".join("public " + b for b in cl.base),
        body = body,
    )

with open("../Header.hpp", "w") as f:
    f.write(out)

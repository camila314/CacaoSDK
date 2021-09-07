import parsecac
import os
import sys

# yeah

starter_source = "#include <cc_defs.hpp>\nextern volatile uintptr_t const base;\n"

source_body_normal = """
{ret} {cls}::{name}({params}) {const}{{
    return reinterpret_cast<{ret}(*)({const}{cls}*{params2})>(base+{addr})(this{params3});
}}
"""

source_body_static = """
{ret} {cls}::{name}({params}) {{
    return reinterpret_cast<{ret}(*)({params2})>(base+{addr})({params3});
}}
"""

def build_source(funky_cls):
    # if "cocos2d" in funky_cls.name:
    #     return ""
    if "CCMenuItemSpriteExtra" in funky_cls.name:
        return ""

    out = ""

    for info in funky_cls.infos:
        if info.func and info.name[1:] not in funky_cls.name:
            body = source_body_normal
            if "..." == info.args[-1]:
                continue
            if info.name == "getPosition" and info.args[0] == "float*":
                continue
            if funky_cls.name == "cocos2d::ZipUtils":
                continue
            if info.getStatic():
                body = source_body_static
            if len(info.args) == 0:
                info.args.append("")
            if info.getReturn() == "ğ":
                continue
            out += body.format(
                name=info.name,
                ret=info.getReturn(),
                params= '' if info.args[0]=='' else ', '.join([f"{arg} p{i}"for i, arg in enumerate(info.args)]),
                cls=funky_cls.name,
                addr=info.addr, 
                params2 = '' if info.args[0]=='' else ('' if info.getStatic() else ', ') + ', '.join(info.args), 
                params3 = '' if info.args[0]=='' else ('' if info.getStatic() else ', ') + ', '.join([f"p{i}"for i, _ in enumerate(info.args)]),
                const="const " if info.getConst() else "",
            )

    return out

parsed = parsecac.parse(sys.argv[1]).values()
open(sys.argv[2], "w").write(starter_source + ''.join(build_source(cl) for cl in parsed))

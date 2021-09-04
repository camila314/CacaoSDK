import parsecac
import os
import sys

# yeah

starter_source = "#include <cc_defs.hpp>\n"

source_body_normal = """
{ret} {cls}::{name}({params}) {{
    return reinterpret_cast<{ret}(*)({cls}*{params2})>(base+{addr})(this{params3});
}}
"""

source_body_static = """
{ret} {cls}::{name}({params}) {{
    return reinterpret_cast<{ret}(*)({params2})>(base+{addr})({params3});
}}
"""

def build_source(funky_cls):
    if "cocos2d" in funky_cls.name:
        return ""

    out = ""

    for info in funky_cls.infos:
        if info.func and info.name[1:] not in funky_cls.name:
            body = source_body_normal
            if info.static:
                body = source_body_static
            if len(info.args) == 0:
                info.args.append("")
            out += body.format(
                name=info.name,
                ret=info.ret,
                params= '' if info.args[0]=='' else ', '.join([f"{arg} p{i}"for i, arg in enumerate(info.args)]),
                cls=funky_cls.name,
                addr=info.addr, 
                params2 = '' if info.args[0]=='' else ('' if info.static else ', ') + ', '.join(info.args), 
                params3 = '' if info.args[0]=='' else ('' if info.static else ', ') + ', '.join([f"p{i}"for i, _ in enumerate(info.args)]),
            )

    return out

parsed = parsecac.parse(sys.argv[1]).values()
open(sys.argv[2], "w").write(starter_source + ''.join(build_source(cl) for cl in parsed))

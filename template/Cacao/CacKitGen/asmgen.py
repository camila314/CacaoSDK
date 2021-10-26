import parser
import os
import sys

starter_code = open(os.path.dirname(__file__) + "/base/stubs.begin.asm", "r").read()

ender_code = open(os.path.dirname(__file__) + "/base/stubs.end.asm", "r").read()

build_data = """"""


def build_cls(funky_cls):
    out = ""

    for info in funky_cls.infos:
        if not info.func:
            continue
        mangs = info.getMangles()
        addr = info.addr
        thunk = info.thunk

        if mangs is not None and addr is not None:
            for mang in mangs:
                if "D0E" not in mang:
                    out += f"defit _{mang}, {addr}\n"
                    if thunk is not None:
                        out += f"thunk __ZThn{thunk}_{mang[2:]}, _{mang}, {thunk}\n"
    return out

full_code = starter_code + ''.join(build_cls(cl) for cl in parser.parse(sys.argv[1]).values()) + ender_code

if open(sys.argv[2], "r").read() != full_code:
    open(sys.argv[2], "w").write(full_code)


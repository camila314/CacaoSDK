import parsecac
import os
import sys

starter_code = open(os.path.dirname(__file__) + "/base/symtab.begin.asm", "r").read()

ender_code = open(os.path.dirname(__file__) + "/base/symtab.end.asm", "r").read()

build_data = """"""


def build_cls(funky_cls):
    curr = 0
    out = ""

    for info in funky_cls.infos:
        if funky_cls.name not in info.name:
            continue
        if not info.func:
            continue
        mangs = info.getMangles()
        addr = info.addr
        thunk = info.thunk

        if mangs is not None and addr is not None:
            out += f"defit _{mangs[curr]}, {addr}\n"

        if curr == 0:
            curr = 1
        else:
            curr = 0
                # if thunk is not None:
                #     out += f"thunk __ZThn{thunk}_{mang[2:]}, _{mang}, {thunk}\n"

    return out

open(sys.argv[2], "w").write(starter_code + ''.join(build_cls(cl) for cl in parsecac.parse(sys.argv[1]).values()) + ender_code)

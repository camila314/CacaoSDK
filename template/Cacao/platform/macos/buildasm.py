import parsecac
import os
import sys

starter_code = open(os.path.dirname(__file__) + "/base/symtab.begin.asm", "r").read()

ender_code = open(os.path.dirname(__file__) + "/base/symtab.end.asm", "r").read()

build_data = """"""


def build_cls(funky_cls):
    curr = 1
    out = ""

    for info in funky_cls.infos:
        # if funky_cls.name not in info.name and "cocos2d" not in funky_cls.name:
        #     continue
        if not info.func:
            continue
        mangs = info.getMangles()
        addr = info.addr
        thunk = info.thunk

        if mangs is not None and addr is not None:
            # if len(mangs) > 1 and ('D1' in mangs[curr] or 'D0' in mangs[curr]):
            #     if curr == 1 and 'D1' in mangs[curr]:
            #         out += f"defit _{mangs[curr].replace('D1', 'D2')}, {addr}\n"
            #     out += f"defit _{mangs[curr]}, {addr}\n"


            #     if curr == 0:
            #         curr = 1
            #     else:
            #         curr = 0
            # else:
            for mang in mangs:
                out += f"defit _{mang}, {addr}\n"
                if 'D1' in mangs:
                    
                if thunk is not None:
                    out += f"thunk __ZThn{thunk}_{mang[2:]}, _{mang}, {thunk}\n"
                # if thunk is not None:
                #     out += f"thunk __ZThn{thunk}_{mang[2:]}, _{mang}, {thunk}\n"

    return out

open(sys.argv[2], "w").write(starter_code + ''.join(build_cls(cl) for cl in parsecac.parse(sys.argv[1]).values()) + ender_code)

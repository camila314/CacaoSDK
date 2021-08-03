import parsecac
import os

starter_code = open("symtab.begin.asm", "r").read()

ender_code = open("symtab.end.asm", "r").read()

build_data = """"""


def build_cls(funky_cls):
    out = ""

    for info in funky_cls.infos:
    	mang = info.getMangle()
    	addr = info.addr
    	thunk = info.thunk
    	if mang is not None and addr is not None:
        	out += f"defit _{mang}, {addr}\n"
        	if thunk is not None:
        		out += f"thunk __ZThn{thunk}_{mang[2:]}, _{mang}, {thunk}\n"

    return out

open("symtab.asm", "w").write(starter_code + ''.join(build_cls(cl) for cl in parsecac.parse("cacnew.mm").values()) + ender_code)

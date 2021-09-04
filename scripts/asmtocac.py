import os
import re
import sys
import parsecac
import itertools

funcs = {}
exist = {}
demangles = {}

with open("../template/Cacao/Auto/functions.txt", "r") as f:
    s = f.readlines()
    for k, m in zip(s[0::2], s[1::2]):
        k = k.replace("void (cocos2d::CCObject::*)(cocos2d::CCObject*)", "cocos2d::SEL_MenuHandler").replace("void (cocos2d::CCObject::*)(float)", "cocos2d::SEL_SCHEDULE")
        demangles[m[:-1]] = k[:-1]

addresses = list(itertools.chain(*[[a.addr for a in c.infos] for c in parsecac.parse("../template/Cacao/cinnamon.mm").values()]))
# addresses = []
with open(sys.argv[1], "r") as f:
    data = f.read()

    for m in re.finditer(r"\ndefit (.+?), (0x[0-9a-f]+)", data):
        mang, addr = m.group(1), m.group(2)

        #fuck it hardcoding
        if (
            "fmt" in mang
            or "pugi" in mang
            or "FMOD" in mang
            or "__va_list" in mang
            or "map" in mang): 
            continue

        # thunk handling
        thunk = None
        thunkf = False
        if 'ZThn' in mang:
            thunkf = True
            thunk = mang.replace("__ZThn", "").partition("_")[0]

        mang = mang.replace(f"Thn{thunk}_", "")


        # not generate existing addresses
        if addr in addresses:
            continue

        # filter out non base ctors and dtors
        if 'C1E' in mang or 'D1E' in mang or 'C3E' in mang or 'D0E' in mang:
            continue

        if mang[1:] not in demangles:
            continue

        func = demangles[mang[1:]]
        ret = "void "
        static = ""
        cl = '::'.join(func.partition("(")[0].split('::')[:-1])

        if cl == "" or cl == "cocos2d" or cl == "cocos2d::extension":
            continue

        if 'C2E' in mang or 'D2E' in mang:
            ret = ""

        func = func.partition("(")[0].split('::')[-1] + "(" + func.partition("(")[2]

        if "create(" in func:
            ret = f"{cl}* "
            static = "static "

        if "shared" in func:
            ret = f"{cl}* "
            static = "static "

        if "init(" in func:
            ret = "bool "

        if cl not in funcs:
            funcs[cl] = []

        funcs[cl].append([static, ret, func, addr, thunk])

with open("exported.mm", "w") as f:
    for cl in funcs:
        out = ""
        out += f"@interface {cl}\n"
        for static, ret, func, addr, thunk in funcs[cl]:

            d = list(filter(lambda x: x[2] == func, funcs[cl]))
            if len(d) > 1:
                if thunk is not None:
                    continue
                thunk = d[0][4] if d[1][4] is None else d[1][4]
            elif len(d) == 1 and thunk is not None:
                continue

            if thunk is None:
                out += f"    {static}{ret}{func} = {addr};\n"
            else:
                out += f"    {static}{ret}{func} = {addr}, {thunk};\n"
        out += f"@end\n\n"

        if out != f"@interface {cl}\n@end\n\n":
            f.write(out)

import os
import re
import sys
import parsecac
import itertools
import json

funcs = {}
exist = {}
demangles = {}

with open("../template/Cacao/platform/macos/functions.txt", "r") as f:
    s = f.readlines()
    for k, m in zip(s[0::2], s[1::2]):
        k = k\
            .replace("void (cocos2d::CCObject::*)(cocos2d::CCObject*)", "cocos2d::SEL_MenuHandler")\
            .replace("void (cocos2d::CCObject::*)(float)", "cocos2d::SEL_SCHEDULE")\
            .replace("void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int)", "cocos2d::extension::SEL_EventHandler")\
            .replace("void (cocos2d::CCObject::*)(cocos2d::CCNode*)", "cocos2d::SEL_CallFuncN")\
            .replace("void (cocos2d::CCObject::*)(cocos2d::CCNode*, void*)", "cocos2d::SEL_CallFuncND")\
            .replace(", std::allocator<std::string> ", "")
        demangles[m[:-1]] = k[:-1]

# addresses = list(itertools.chain(*[[a.addr for a in c.infos] for c in parsecac.parse("../template/Cacao/cinnamon.mm").values()]))

returns = {}
consts = {}
statics = {}

with open("libcocos2d.demangled.txt") as f:
    for m in re.finditer(r"(?:\w+?: )(?:virtual )?(static )?(.+)__\w+ (.+)\(.+\)(const )?\n", f.read()):
        static, ret, func, const = m.group(1) is not None, m.group(2).replace("BOOL", "bool").replace("class ", "").replace("enum ", "").replace("struct ", "").replace("virtual ", "").replace(" *", "*").replace(" &", "&"), m.group(3), m.group(4) is not None
        returns[func] = ret[:-1]
        consts[func] = const
        statics[func] = static

# addresses = []
with open(sys.argv[1], "r") as f:
    data = json.load(f)

    for addr, mang in data.items():
        addr = hex(int(addr, 16) - 0x100000000)

        #fuck it hardcoding
        if (
            "fmt" in mang
            or "pugi" in mang
            or "tinyxml" in mang
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
        # if addr in addresses:
        #     continue



        # filter out non base ctors and dtors
        # if 'C1E' in mang or 'D1E' in mang or 'C3E' in mang or 'D0E' in mang:
        #     continue

        if mang not in demangles:
            continue


        func = demangles[mang]
        
        
        static = ""
        cl = '::'.join(func.partition("(")[0].split('::')[:-1])

        if cl == "" or cl == "cocos2d" or cl == "cocos2d::extension":
            continue


        if 'C2E' in mang or 'D2E' in mang:
            ret = ""

        func = func.partition("(")[0].split('::')[-1] + "(" + func.partition("(")[2]

        print(f"{cl}::{func.partition('(')[0]}")
        if f"{cl}::{func.partition('(')[0]}" in returns:
            ret = returns[f"{cl}::{func.partition('(')[0]}"] + " "
        else:
            ret = "void "

        if "create(" in func:
            ret = f"{cl}* "
            static = "static "

        if "shared" in func:
            ret = f"{cl}* "
            static = "static "

        if "init(" in func:
            ret = "bool "

        if "~" in func:
            ret = ""

        # if mang not in funcs:
        #     funcs[mang] = []

        print(addr)

        funcs[mang] = [cl, static, ret, func, addr, thunk]

j = open("exported.mm", "w")

with open("vtabledump.json", "r") as f:
    data = json.load(f)
    for vt, mangs in data.items():
        out = ""
        if len(mangs) < 4:
            continue
        if mangs[3] not in funcs:
            continue
        cl = funcs[mangs[3]][0]
        out += f"@interface {cl}\n"


        for mang in mangs:
            if mang in funcs:
                
                
                cl, static, ret, func, addr, thunk = funcs[mang]

                if str(len(cl.split("::")[-1])) + cl.split("::")[-1] not in vt:
                    continue

                # d = list(filter(lambda x: x[2] == func, funcs[cl]))
                # if len(d) > 1:
                if thunk is not None:
                    continue
                #     thunk = d[0][4] if d[1][4] is None else d[1][4]
                # elif len(d) == 1 and thunk is not None:
                #     continue

                if thunk is None:
                    out += f"    {static}{ret}{func} = {addr};\n"
                else:
                    out += f"    {static}{ret}{func} = {addr}, {thunk};\n"
        out += f"@end\n\n"

        if out != f"@interface {cl}\n@end\n\n":
            j.write(out)

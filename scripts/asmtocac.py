import os
import re
import sys

funcs = {}
exist = {}
mangles = []

with open("functions.txt", "r") as f:
	s = f.readlines()
	for k, m in zip(s[0::2], s[1::2]):
		mangles.append(m[:-1])

with open("../template/Cacao/Cac/cackit.mm", "r") as f:
    while True:
        l = f.readline()
        if not l:
            break
        cl = l[11:-1]
        exist[cl] = []
        l = f.readline()
        if not l:
            break
        while l != "@end\n":
            exist[cl].append(l)
            l = f.readline()
            if not l:
                break
        l = f.readline()
        if not l:
            break

with open("../template/Cacao/symtab.asm", "r") as f:
    data = f.read()
    data = data.replace("void (cocos2d::CCObject::*)(cocos2d::CCObject*)", "cocos2d::SEL_CallFuncO").replace("void (cocos2d::CCObject::*)(float)", "cocos2d::SEL_SCHEDULE")
    for m in re.finditer(r"; (?:cocos2d)?(?:::extension)?([^(?:non)].+)::(.+?)\((.*)\)(?: const)?\ndefit (.+?), (0x[0-9a-f]+)", data):
        cl, fun, param, add, mang, ret = m.group(1), m.group(2), m.group(3), m.group(5), m.group(4), "void"
        #fuck it hardcoding
        print(cl)
        if (
            cl == "cocos2d"
            or "fmt" in cl
            or "pugi" in cl
            or "FMOD" in cl
            or "..." in param 
            or "std::map" in param
            or "__va_list" in param 
            or "operator" in fun): 
            continue

        print(cl)
        if fun == "create":
            ret = f"{cl}*"
        if fun == "init":
            ret = "bool"

        if cl not in funcs:
            funcs[cl] = []
        print(mang)
        funcs[cl].append((fun, param, add, ret, mangles.index(mang[1:])))

# for cl in funcs:
#     with open('cac/' + cl.replace('::', '/') + '.mm', "w") as f:
#         f.write(f"@interface {cl}\n")
#         for fun, param, add, ret, mang in funcs[cl]:
#             static = "static " if fun == "create" else ""
#             if fun in cl or fun[1:] in cl:
#                 if 'C2' in mangles[mang] or 'D2' in mangles[mang]:
#                     f.write(f"    {fun}({param}) = {add}, {mang};\n")
#             else:
#                 if cl in exist:
#                     for l in exist[cl]:
#                         if f"{fun}({param}) = {add};\n" in l:
#                             f.write(l[:-2] + f", {mang};\n")
#                             break
#                     else:
#                         f.write(f"    {static}{ret} {fun}({param}) = {add}, {mang};\n")
#                 else:
#                     f.write(f"    {static}{ret} {fun}({param}) = {add}, {mang};\n")
#         f.write(f"@end\n\n")

with open('cacnew.mm', "w") as f:
    for cl in funcs:
        f.write(f"@interface {cl}\n")
        for fun, param, add, ret, mang in funcs[cl]:
            static = "static " if fun == "create" else ""
            if fun in cl or fun[1:] in cl:
                if 'C2' in mangles[mang] or 'D2' in mangles[mang]:
                    f.write(f"    {fun}({param}) = {add}, {mang};\n")
            else:
                if cl in exist:
                    for l in exist[cl]:
                        if f"{fun}({param}) = {add};\n" in l:
                            f.write(l[:-2] + f", {mang};\n")
                            break
                    else:
                        f.write(f"    {static}{ret} {fun}({param}) = {add}, {mang};\n")
                else:
                    f.write(f"    {static}{ret} {fun}({param}) = {add}, {mang};\n")
        f.write(f"@end\n\n")

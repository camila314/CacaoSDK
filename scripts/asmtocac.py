import os
import re

funcs = {}
exist = {}

with open("cackit.cac", "r") as f:
	while True:
		l = f.readline()
		if not l:
			break
		cl = l[11:-1]
		print(cl)
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

with open("../template/Cacao/symadd.asm", "r") as f:
	data = f.read()
	for m in re.finditer(r"; (?:cocos2d::)?(?:extension::)?([^(?:non)].+?)::(.+?)\((.+)\)\ndefit.+?, (0x[0-9a-f]+)", data):
		cl, fun, param, add, ret = m.group(1), m.group(2), m.group(3), m.group(4), "void"
		param = param.replace("void (cocos2d::CCObject::*)(cocos2d::CCObject*)", "Cacao::CC_SEL").replace("void (cocos2d::CCObject::*)(float)", "Cacao::CC_SCHED")
		#fuck it hardcoding
		if (
			"~" == fun[0] 
			or cl == "cocos2d"
			or cl in [fun, "fmt", "FMOD"] 
			or "..." in param 
			or "std::map" in param 
			or "__va_list" in param 
			or "operator" in fun): 
			continue
		if cl not in funcs:
			funcs[cl] = []
		funcs[cl].append((fun, param, add, ret))

with open("cackit.cac", "w") as f:
	for cl in funcs:
		f.write(f"@interface {cl}\n")
		for fun, param, add, ret in funcs[cl]:
			if cl in exist:
				for l in exist[cl]:
					if f"{fun}({param}) = {add};\n" in l:
						f.write(l)
						break
				else:
					f.write(f"    {ret} {fun}({param}) = {add};\n")
			else:
				f.write(f"    {ret} {fun}({param}) = {add};\n")
		f.write(f"@end\n\n")

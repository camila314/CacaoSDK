from Shared import * 

classes = pickle.load(open(picklepath, "rb"))

memberBody = """
getOutoflineFunctionOf({cl}, {name}, {const}, {count}{trail}{types}) {{
	return reinterpret_cast<{const}{constw}${cl}<{cl}>*>(this)->${cl}<{cl}>::{name}({params});
}}
"""

staticBody = """
getOutoflineFunctionOf({cl}, {name}, {const}, {count}{trail}{types}) {{
	return ${cl}<{cl}>::{name}({params});
}}
"""

destructorBody = """
{cl}::{name}({exprs}) {{
	if (destructorLock[this]) return;
	destructorLock[this] = true;
	reinterpret_cast<${cl}<{cl}>*>(this)->destructor({params});
}}
"""

constructorBody = """
{cl}::{name}({exprs}) : {cl}(*this) {{
	reinterpret_cast<${cl}<{cl}>*>(this)->constructor({params});
}}
"""

out = """// 
// Copyright camila314 & alk1m123 2022. 
// Autogenerated using a python script
//
#include <Interface.hpp>
using namespace Cacao::interfaces;
using namespace cocos2d;
using namespace cocos2d::extension;
"""

i = 0
for cl in classes:
	for info in cl.info:
		if isinstance(info, str) and "cocos2d" in cl.name:
			out += "\n" + info.replace("\n\t", "\n") + "\n"
			continue
		if not isinstance(info, GenFunction):
			continue
		if linkable(info):
			continue
		if info.getOffset(platform) == "None":
			continue

		body = memberBody
		if info.static:
			body = staticBody
		if '~' + stripNamespace(cl.name) == info.declare.name:
			body = destructorBody
		if stripNamespace(cl.name) == info.declare.name:
			body = constructorBody

		out += body.format(
			name = info.declare.name,
			cl = stripNamespace(cl.name),
			types = ', '.join(arg.getType(i) for i, arg in enumerate(info.parameters)),
			params = ', '.join(arg.getName(i) for i, arg in enumerate(info.parameters)),
			exprs = ', '.join(arg.getExpr(i) for i, arg in enumerate(info.parameters)),
			const = 'const' if info.const else '',
			constw = ' ' if info.const else '',
			count = len(info.parameters),
			trail = ', ' if len(info.parameters) > 0 else '',
		)

writeIfDifferent("Source.cpp", out)
 

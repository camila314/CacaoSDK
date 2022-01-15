import pickle
import os
import sys
import re


class GenDeclaration:
	def __init__(self):
		self.type = None
		self.name = None
	def __repr__(self):
		return f"{self.type}" + (f" {self.name}" if self.name else "")
	def getType(self, default=None):
		return self.type
	def getName(self, default=None):
		return f"p{default}"
	def getExpr(self, default=None):
		if self.type is None:
			return getName(default)
		return f"{self.getType(default)} {self.getName(default)}"

class GenFunction:
	def __init__(self):
		self.static = False
		self.virtual = False
		self.const = False
		self.declare = None
		self.parameters = []
		self.offset = 0
		self.parent = None
		self.convention = None
		self.mangle = ""
	def __repr__(self):
		return f"{self.declare}({self.parameters}) = {self.offset}"
	def getAddress(self, t, i):
		if self.offset is None:
			return None
		if t == "MacOS":
			return "base+" + str(self.offset[0])

		if t == "Win32":
			if "cocos2d" in self.parent.name:
				if linkable(self):
					return f"FunctionScrapper::pointerOf((mem{i})(&{self.parent.name}::{self.declare.name}))"
				# return f"dlsym((void*)base, {self.mangle})"
			return "base+" + str(self.offset[1])

		if t == "iOS":
			return "base+" + str(self.offset[2])

		if t == "Android":
			if linkable(self) and self.declare.name not in ['constructor', 'destructor']:
				return f"FunctionScrapper::pointerOf((mem{i})(&{self.parent.name}::{self.declare.name}))"
			return f'(uintptr_t)dlsym((void*)base, "{self.getMangle()}")'
	
	def getOffset(self, t):
		if self.offset is None:
			return None
		if t == "MacOS":
			return str(self.offset[0])

		if t == "Win32":
			return str(self.offset[1])

		if t == "iOS":
			return str(self.offset[2])

		if t == "Android":
			return ""

	def getMangle(self):
		return self.mangle


class GenMember:
	def __init__(self):
		self.declare = None
		self.offset = None
	def __repr__(self):
		return f"{self.declare} = {self.offset}"
	def getOffset(self, t):
		if self.offset is None:
			return None
		if t == "MacOS":
			return self.offset[0]
		if t == "Win32":
			return self.offset[1]
		if t == "iOS":
			return self.offset[2]

class GenClass:
	def __init__(self):
		self.info = []
		self.name = ""
		self.base = []
	def __repr__(self):
		return self.name + ": " + ', '.join(self.base) + "\n" + '\n'.join(repr(r) for r in self.info)

picklepath = os.path.join(os.path.dirname(__file__), "gen.pickle")
platform = sys.argv[1]

def inheritReturn(info):
	if info.declare.type != "auto":
		return info.declare.type
	if len(info.parameters) == 0:
		return f"getPReturnOf({info.parent.name}, {info.declare.name})"
	defaults = ', '.join([info.parent.name, info.declare.name] + [f"std::declval<{arg.getType(i)}>()" for i, arg in enumerate(info.parameters)])
	return f"getReturnOf({defaults})"

functionBody = """		using r{id} = {type};
		using f{id} = r{id}(CallConv(__thiscall)*)({const}{cl}*{params2});
		{setAddress}
		return reinterpret_cast<f{id}>({offset})(this{params});"""

staticBody = """		using r{id} = {type};
		using f{id} = r{id}(CallConv(__fastcall)*)({params2});
		{setAddress}
		return reinterpret_cast<f{id}>({offset})({params});"""

returnlessBody = """		using r{id} = {cl}*;
		using f{id} = r{id}(CallConv(__thiscall)*)({const}{cl}*{params2});
		{setAddress}
		reinterpret_cast<f{id}>({offset})(this{params});"""

implementedFunctionBody = """		return this->{cl}::{name}({params});"""

implementedStaticBody = """		return {cl}::{name}({params});"""

def hasstl(info):
	for arg in info.parameters:
		if "gd::" in arg.type:
			return True
	return False

def linkable(info):
	if platform == "Android":
		return not hasstl(info)
	if platform == "Windows":
		if "cocos2d::" in info.parent.name:
			return not hasstl(info)
		return False

def getFunctionImplementation(cl, info, i):
	if not isinstance(info, GenFunction):
		return ""

	if linkable(info):
		body = implementedFunctionBody
		if info.static:
			body = implementedStaticBody

		return body.format(
			id = i,
			params = ', '.join(arg.getName(i) for i, arg in enumerate(info.parameters)),
			name = info.declare.name,
			cl = cl.name,
		)

	body = functionBody
	if info.static:
		body = staticBody
	if not info.declare.type:
		body = returnlessBody
	return body.format(
		id = i,
		type = inheritReturn(info),
		offset = info.getOffset(platform, i), 
		params = (', ' if not info.static and len(info.parameters) > 0 else "") + ', '.join(arg.getName(i) for i, arg in enumerate(info.parameters)),
		name = info.declare.name,
		cl = cl.name,
		params2 = (', ' if not info.static and len(info.parameters) > 0 else "") + ', '.join(arg.getType(i) for i, arg in enumerate(info.parameters)),
		const = "const " if info.const else "",
		setAddress = info.setAddress(platform, i),
	)


def writeIfDifferent(name, out):
	filePath = os.path.join(os.path.dirname(__file__), "..", name)

	def isDifferent():
		with open(filePath, "r") as f:
			return f.read() != out

	if not os.path.isfile(filePath) or isDifferent():
		with open(filePath, "w") as f:
			f.write(out)

def getNamespace(name):
	return '::'.join(name.split('::')[:-1])

def stripNamespace(name):
	return name.split('::')[-1]

with open(os.path.join(os.path.dirname(__file__), "scrap", "libcocos2d.demangled.txt"), "r") as f2:
	accessSpecifier = {}
	for line in f2.readlines():
		match = re.search(r"(.+?):.+(cocos2d::.+?)\(", line)
		if match is not None:
			accessSpecifier[match.group(2)] = match.group(1)
	# im sorry

	def getAccessSpecifierOf(func):
		if func not in accessSpecifier:
			return "private"
		return accessSpecifier[func]

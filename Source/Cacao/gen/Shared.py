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
        return f"p{default}" if self.name is None else self.name
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
    def getOffset(self, t, i):
        if self.offset is None:
            return None
        if t == "MacOS":
            return "base+" + str(self.offset[0])

        if t == "Win32":
            if "cocos2d" in self.parent.name:
                if linkable(self):
                    return f"FunctionScrapper::pointerOf((a{i})(&{self.parent.name}::{self.declare.name}))"
                # return f"dlsym((void*)base, {self.mangle})"
            return "base+" + str(self.offset[1])

        if t == "iOS":
            return "base+" + str(self.offset[2])

        if t == "Android":
            if linkable(self):
                return f"FunctionScrapper::pointerOf((a{i})(&{self.parent.name}::{self.declare.name}))"
            return f'(uintptr_t)dlsym((void*)base, "{self.getMangle()}")'
    def getAddress(self, t):
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
    defaults = ', '.join(f"dv<{arg.getType(i)}>()" for i, arg in enumerate(info.parameters))
    return f"getReturnOf({info.parent.name}, {info.declare.name}, {defaults})"

functionBody = """        using r{id} = {type};
        using f{id} = r{id}(*)({const}{cl}*{params2});
        return reinterpret_cast<f{id}>({offset})(this{params});"""

staticBody = """        using r{id} = {type};
        using f{id} = r{id}(*)({params2});
        return reinterpret_cast<f{id}>({offset})({params});"""

returnlessBody = """        using r{id} = {cl}*;
        using f{id} = r{id}(*)({const}{cl}*{params2});
        reinterpret_cast<f{id}>({offset})(this{params});"""

implementedFunctionBody = """        return this->{cl}::{name}({params});"""

implementedStaticBody = """        return {cl}::{name}({params});"""

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
    if "~" in info.declare.name:
        return f"        jumpDestructor({info.getAddress(platform)})";

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
    )

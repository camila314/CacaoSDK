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
        self.offset = None
        self.parent = None
        self.convention = None
    def __repr__(self):
        return f"{self.declare}({self.parameters}) = {self.offset}"
    def getOffset(self, t):
        if self.offset is None:
            return None
        if t == "MacOS":
            return self.offset[0]
        if t == "Win32":
            return self.offset[1]
        if t == "iOS":
            return self.offset[2]
    # def getParameterTypes(self):
    #     ', '.join(p.getType(i) for i, p in enumerate(self.parameters))
    # def getParameterNames(self):
    #     ', '.join(p.getName(i) for i, p in enumerate(self.parameters))
    # def getParameterExpr(self):
    #     ', '.join(p.getExpr(i) for i, p in enumerate(self.parameters))


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
        return reinterpret_cast<f{id}>(base+{offset})(this{params});"""

staticBody = """        using r{id} = {type};
        using f{id} = r{id}(*)({params2});
        return reinterpret_cast<f{id}>(base+{offset})({params});"""

returnlessBody = """        using r{id} = {cl}*;
        using f{id} = r{id}(*)({const}{cl}*{params2});
        reinterpret_cast<f{id}>(base+{offset})(this{params});"""

def getFunctionImplementation(cl, info, i):
    if not isinstance(info, GenFunction):
        return ""
    if "~" in info.declare.name:
        return f"        jumpDestructor({info.getOffset(platform)})";
    body = functionBody
    if info.static:
        body = staticBody
    if not info.declare.type:
        body = returnlessBody
    return body.format(
        id = i,
        type = inheritReturn(info),
        offset = info.getOffset(platform), 
        params = (', ' if not info.static and len(info.parameters) > 0 else "") + ', '.join(arg.getName(i) for i, arg in enumerate(info.parameters)),
        name = info.declare.name,
        cl = cl.name,
        params2 = (', ' if not info.static and len(info.parameters) > 0 else "") + ', '.join(arg.getType(i) for i, arg in enumerate(info.parameters)),
        const = "const " if info.const else "",
    )

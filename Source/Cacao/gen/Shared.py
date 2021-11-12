import pickle
import os

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
    def __repr__(self):
        return f"{self.declare}({self.parameters}) = {self.offset}"
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

class GenClass:
    def __init__(self):
        self.info = []
        self.name = ""
        self.base = []
    def __repr__(self):
        return self.name + ": " + ', '.join(self.base) + "\n" + '\n'.join(repr(r) for r in self.info)

picklepath = os.path.join(os.path.dirname(__file__), "gen.pickle")

functionBody = """        using r{id} = decltype(std::declval<{cl}>().{name}({defaults}));
        using f{id} = r{id}(*)({const}{cl}*{params2});
        return reinterpret_cast<f{id}>(base+{offset})(this{params});"""

staticBody = """        using r{id} = decltype(std::declval<{cl}>().{name}({defaults}));
        using f{id} = r{id}(*)({params2});
        return reinterpret_cast<f{id}>(base+{offset})({params});
"""

returnlessBody = """        using r{id} = {cl}*;
        using f{id} = r{id}(*)({const}{cl}*{params2});
        reinterpret_cast<f{id}>(base+{offset})(this{params});"""

def getFunctionImplementation(cl, info, i):
    if not isinstance(info, GenFunction):
        return ""
    if "~" in info.declare.name:
        return f"        jumpDestructor({info.offset})";
    body = functionBody
    if info.static:
        body = staticBody
    if not info.declare.type:
        body = returnlessBody
    return body.format(
        id = i,
        offset = info.offset, 
        params = (', ' if not info.static and len(info.parameters) > 0 else "") + ', '.join(arg.getName(i) for i, arg in enumerate(info.parameters)),
        name = info.declare.name,
        cl = cl.name,
        params2 = (', ' if not info.static and len(info.parameters) > 0 else "") + ', '.join(arg.getType(i) for i, arg in enumerate(info.parameters)),
        defaults = ', '.join(f"std::declval<{arg.getType(i)}>()" for i, arg in enumerate(info.parameters)),
        const = "const " if info.const else "",
    )

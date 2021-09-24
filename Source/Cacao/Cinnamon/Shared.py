import pickle
import os

class CinnamonDeclaration:
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

class CinnamonFunction:
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


class CinnamonMember:
    def __init__(self):
        self.declare = None
        self.offset = None
    def __repr__(self):
        return f"{self.declare} = {self.offset}"

class CinnamonClass:
    def __init__(self):
        self.info = []
        self.name = ""
        self.base = []
    def __repr__(self):
        return self.name + ": " + ', '.join(self.base) + "\n" + '\n'.join(repr(r) for r in self.info)

picklepath = os.path.join(os.path.dirname(__file__), "cinnamon.pickle")

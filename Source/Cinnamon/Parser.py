import ply.yacc as yacc
from Lexer import tokens, addFile, setEntry
import os
import pickle

def debugout(*args):
    # print(*args)
    pass

class CinnamonDeclaration:
    def __init__(self):
        self.type = None
        self.name = None
    def __repr__(self):
        return f"{self.type}" + (f" {self.name}" if self.name else "")
    # def getType(self, default=None):
    #     return self.type
    # def getName(self, default=None):
    #     return f"p{default}" if self.name is None else self.name
    # def getExpr(self, default=None):
    #     if self.type is None:
    #         return getName(default)
    #     return f"{getType(default)} {getName(default)}"

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

# empty implementation
def p_empty(p):
    'empty :'
    pass


# include implementation
def p_include_include(p):
    'include : INCLUDE LTRI TEMPLATEDATA RTRI'
    p[0] = []
    debugout(p[0:10], "p_include_include")

def p_include_includes(p):
    'include : include include'
    p[0] = []
    debugout(p[0:10], "p_include_includes")


# body implementation
def p_body_body(p):
    'body : bodypure'
    p[0] = p[1]
    debugout(p[0:10], "p_body_body")

def p_body_empty(p):
    'body : empty'
    p[0] = []
    debugout(p[0:10], "p_body_empty")

def p_bodypure_bodypure(p):
    'bodypure : bodypure bodypure'
    p[0] = p[2] + p[1]
    debugout(p[0:10], "p_body_body")

def p_bodypure_body(p):
    'bodypure : class LCURLY info RCURLY'
    c = p[1]
    c.info = p[3]
    p[0] = [c]
    debugout(p[0:10], "p_bodypure_body")

# precedence = (
#     ('left', 'bodypure_empty'),
#     ('left', 'bodypure_body'),
#     ('left', 'bodypure_bodypure'),
#  )

# class implementation
def p_class_class(p):
    'class : CLASS IDENT'
    c = CinnamonClass()
    c.name = p[2]
    p[0] = c
    debugout(p[0:10], "p_class_class")

def p_class_based(p):
    'class : CLASS IDENT COLON classbase'
    c = CinnamonClass()
    c.name = p[2]
    c.base = p[4]
    for a in p[4]:
        a.parent = c
    p[0] = c
    debugout(p[0:10], "p_class_based")

def p_classbase_bases(p):
    'classbase : classbase COMMA classbase'
    p[0] = p[1] + p[3]
    debugout(p[0:10], "p_classbase_bases")

def p_classbase_base(p):
    'classbase : IDENT'
    p[0] = [p[1]]
    debugout(p[0:10], "p_classbase_base")



# info implementation
def p_info_infos(p):
    'info : info info'
    p[0] = p[1] + p[2]
    debugout(p[0:10], "p_info_infos")

def p_info_function(p):
    'info : function'
    p[0] = [p[1]]
    debugout(p[0:10], "p_info_function")

def p_info_volatile(p):
    'info : volatile'
    p[0] = [p[1][1:]]
    debugout(p[0:10], "p_info_volatile")

def p_info_member(p):
    'info : member'
    p[0] = [p[1]]
    debugout(p[0:10], "p_info_member")



# member implementation
def p_member_normal(p):
    'member : declaration offset SEMI'
    m = CinnamonMember()
    m.declare = p[1]
    m.offset = p[2]
    p[0] = m

def p_member_offsetless(p):
    'member : declaration SEMI'
    m = CinnamonMember()
    m.declare = p[1]
    p[0] = m



# function implementation
def p_function_virtual(p):
    'function : VIRTUAL purefunction offset SEMI'
    f = p[2]
    f.virtual = True
    f.offset = p[3]
    p[0] = f
    debugout(p[0:10], "p_function_virtual")

def p_function_static(p):
    'function : STATIC purefunction offset SEMI'
    f = p[2]
    f.static = True
    f.offset = p[3]
    p[0] = f
    debugout(p[0:10], "p_function_static")

def p_function_normal(p):
    'function : purefunction offset SEMI'
    f = p[1]
    f.offset = p[2]
    p[0] = f
    debugout(p[0:10], "p_function_normal")

def p_purefunction_pure(p):
    'purefunction : declaration parameter'
    f = CinnamonFunction()
    f.declare = p[1]
    f.parameters = p[2]
    p[0] = f
    debugout(p[0:10], "p_purefunction_pure")

def p_purefunction_const(p):
    'purefunction : declaration parameter CONST'
    f = CinnamonFunction()
    f.declare = p[1]
    f.parameters = p[2]
    f.const = True
    p[0] = f
    debugout(p[0:10], "p_purefunction_const")

def p_purefunction_returnless(p):
    'purefunction : name parameter'
    f = CinnamonFunction()
    f.declare = p[1]
    f.parameters = p[2]
    p[0] = f
    debugout(p[0:10], "p_purefunction_returnless")



# offset implementation
def p_offset_offset(p):
    'offset : ASSIGN ADDRESS'
    p[0] = p[2]
    debugout(p[0:10], "p_offset_offset")



# parameter implementation
def p_parameter_parameter(p):
    'parameter : LPAREN pureparameter RPAREN'
    p[0] = p[2]
    debugout(p[0:10], "p_parameter_parameter")

def p_pureparameter_types(p):
    'pureparameter : pureparameter COMMA pureparameter'
    p[0] = p[1] + p[3]
    debugout(p[0:10], "p_pureparameter_types")

def p_pureparameter_type(p):
    'pureparameter : type'
    p[0] = [p[1]]
    debugout(p[0:10], "p_pureparameter_type")

def p_pureparameter_declaration(p):
    'pureparameter : declaration'
    p[0] = [p[1]]
    debugout(p[0:10], "p_pureparameter_type")

def p_pureparameter_empty(p):
    'pureparameter : empty'
    p[0] = []
    debugout(p[0:10], "p_pureparameter_empty")



# declaration implementation
def p_declaration_declaration(p):
    'declaration : type name'
    d = p[1]
    d.name = p[2].name
    p[0] = d
    debugout(p[0:10], "p_declaration_declaration")

def p_name_name(p):
    'name : IDENT'
    d = CinnamonDeclaration()
    d.name = p[1]
    p[0] = d
    debugout(p[0:10], "p_name_name")



# type implementation
def p_type_type(p):
    'type : puretype'
    d = CinnamonDeclaration()
    d.type = p[1]
    p[0] = d
    debugout(p[0:10], "p_type_type")

def p_puretype_templated(p):
    'puretype : puretype template'
    p[0] = p[1] + p[2]
    debugout(p[0:10], "p_puretype_templated")

def p_puretype_unsigned(p):
    'puretype : UNSIGNED puretype'
    p[0] = p[1] + " " + p[2]
    debugout(p[0:10], "p_puretype_unsigned")

def p_puretype_constl(p):
    'puretype : CONST puretype'
    p[0] = p[1] + " " + p[2]
    debugout(p[0:10], "p_puretype_constl")

def p_puretype_constr(p):
    'puretype : puretype CONST'
    p[0] = p[1] + p[2]
    debugout(p[0:10], "p_puretype_constr")

def p_puretype_puretype(p):
    'puretype : IDENT'
    p[0] = p[1]
    debugout(p[0:10], "p_puretype_puretype")



# template implementation
def p_template_template(p):
    'template : LTRI puretemplate RTRI'
    p[0] = "<" + p[2] + ">"
    debugout(p[0:10], "p_template_template")

def p_puretemplate_data(p):
    'puretemplate : TEMPLATEDATA'
    p[0] = p[1]
    debugout(p[0:10], "p_puretemplate_data")

def p_puretemplate_datas(p):
    'puretemplate : TEMPLATEDATA puretemplate'
    p[0] = p[1] + p[2]
    debugout(p[0:10], "p_puretemplate_datas")

def p_puretemplate_recurse(p):
    'puretemplate : template puretemplate'
    p[0] = p[1] + p[2]
    debugout(p[0:10], "p_puretemplate_recurse")



# volatile implementation
def p_volatile_start(p):
    'volatile : VOLATILE purevolatile'
    p[0] = p[2]
    debugout(p[0:10], "p_volatile_start")

def p_purevolatile_recurse(p):
    'purevolatile : LCURLY purevolatile RCURLY'
    p[0] = '{' + p[2] + '}'
    debugout(p[0:10], "p_purevolatile_recurse")

def p_purevolatile_datas(p):
    'purevolatile : purevolatile purevolatile'
    p[0] = p[1] + p[2]
    debugout(p[0:10], "p_purevolatile_datas")

def p_purevolatile_data(p):
    'purevolatile : VOLATILEDATA'
    p[0] = p[1]
    debugout(p[0:10], "p_purevolatile_data")

def p_purevolatile_semi(p):
    'purevolatile : SEMI'
    p[0] = ';'
    debugout(p[0:10], "p_purevolatile_semi")



# Error rule for syntax errors
def p_error(p):
    print(p)
    print(p.value)
    print("Syntax error in input!")

start = 'body'

# Build the parser
parser = yacc.yacc()

entryFile = "MacOS/GJBaseGameLayer.mm"
setEntry(entryFile)

result = parser.parse(open(entryFile,"r").read())
pickle.dump(result, open("cinnamon.pickle", "wb"))
print(result)

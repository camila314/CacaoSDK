import os
import sys
import platform
import queue
import re

reserved = {
    'static': 'STATIC',
    'virtual': 'VIRTUAL',
    'const': 'CONST',
    'stdcall': 'STDCALL',
    'thiscall': 'THISCALL',
    'optcall': 'OPTCALL',
    'membercall': 'MEMBERCALL',
    'unsigned': 'UNSIGNED',
    'class': 'CLASS',
    'const*': 'CONSTP',
    'const&': 'CONSTP',
}

tokens = [
    'ASSIGN',
    'ADDRESS',
    'NUM',

    'IDENT',
    'LPAREN',
    'RPAREN', 
    'LTRI',
    'RTRI', 
    'LCURLY',
    'RCURLY',
    'INCLUDE', 

    'WHITESPACE', 

    'SEMI', 
    'COMMA', 
    'COLON', 
    
    'VOLATILE', 
    'VOLATILEDATA',
    'TEMPLATEDATA'
] + list(set(reserved.values()))

states = (
    ('volatile','exclusive'),
    ('template','exclusive'),
    ('include','exclusive'),
    ('info','inclusive'),
)

t_info_ASSIGN = r"="
t_info_ADDRESS = r"0x[0-9a-fA-F]+"
t_info_LPAREN = r"\("
t_info_RPAREN = r"\)"

t_info_SEMI = r";"
t_INITIAL_info_COMMA = r","
t_COLON = r":"

t_INITIAL_include_ignore_WHITESPACE = r"[\s\t]"
t_ignore_COMMENT = r'//.*'

nextinclude = ""

def t_template_TEMPLATEDATA(t):
    r"[^<>]+"
    global includenest, nextinclude
    if includenest > 0:
        nextinclude = t.value
    return t

def t_volatile_VOLATILEDATA(t):
    r"[^{};]+"
    t.lexer.lineno += t.value.count("\n")
    return t

def t_VOLATILE(t):
    r"volatile"
    t.lexer.push_state('volatile')
    return t

includenest = 0
def t_INCLUDE(t):
    r"\#include"
    global includenest
    if includenest == 0:
        t.lexer.push_state('include')
        includenest += 1
    return t

templatenest = 0
def t_info_template_include_LTRI(t):
    r"<"
    global templatenest
    if templatenest == 0:
        t.lexer.push_state('template')
    templatenest += 1
    return t

def t_info_template_include_RTRI(t):
    r">"
    global templatenest, includenest
    templatenest -= 1
    
    if templatenest == 0:
        t.lexer.pop_state()

    if includenest == 1:
        includenest -= 1
        addFile(nextinclude)
        t.lexer.pop_state()
    return t

curlynest = 0
def t_INITIAL_volatile_LCURLY(t):
    r"{"
    global curlynest
    if curlynest == 0:
        t.lexer.push_state('info')
    if curlynest == 1:
        t.lexer.push_state('volatile')
    curlynest += 1
    return t

def t_INITIAL_volatile_RCURLY(t):
    r"}"
    global curlynest
    curlynest -= 1
    if curlynest == 0:
        t.lexer.pop_state()
    if curlynest == 1:
        t.lexer.pop_state()
    return t

def t_volatile_SEMI(t):
    r";"
    global curlynest
    if curlynest == 1:
        t.lexer.pop_state()
    return t

def t_IDENT(t):
    r'[\w\~\#][\w\:\&\[\]\+\-\*\/\=\%\.]*'

    if t.value == "volatile":
        return t_VOLATILE(t)

    t.type = reserved.get(t.value,'IDENT')
    return t

def t_newline(t):
    r'\n+'
    t.lexer.lineno += t.value.count("\n")

def t_error(t):
    print(t)
    raise ValueError("initial uwu")

def t_volatile_error(t):
    print(t)
    raise ValueError("volatile uwu")

def t_template_error(t):
    print(t)
    raise ValueError("template uwu")

def t_info_error(t):
    print(t)
    raise ValueError("info uwu")

def t_include_error(t):
    print(t)
    raise ValueError("include uwu")

# EOF handling rule
def t_eof(t):
    global currentfile
    # more = nextFile()
    # if more:
    #     t.lexer.input(open(more).read())
    #     t.lexer.lineno = 1
    #     # print(more)
    #     currentfile = more
    #     return t.lexer.token()
    return None

import ply.lex as lex
lexer = lex.lex()

fileset = set()
filequeue = queue.Queue()

def nextFile():
    global filequeue
    if filequeue.empty():
        return None
    f = filequeue.get()
    return f

def addFile(f):
    global fileset, currentfile, preprocessed
    f2 = os.path.join(os.path.dirname(currentfile), f)
    cont = lexer.lexdata
    if f2 not in fileset:
        fileset.add(f2)
        # filequeue.put(f2)
        more = open(f2).read()
        
        # preprocessed = lexer.lexinput.replace("#")
        preprocessed = re.sub(f'#include\\s*<{f}>', more, cont)
    else:
        preprocessed = re.sub(f'#include\\s*<{f}>', "", cont)
    t.lexer.input(preprocessed)
    t.lexer.lineno = 1
    t.lexer.begin('INITIAL')


currentfile = ""
def setEntry(f):
    global currentfile
    currentfile = f

# def getNext():
#     tt = lexer.token()
#     if not tt:
#         # raise ValueError("EOF when parsing")
#     return tt

setEntry(os.path.join(os.path.dirname(__file__), f"{sys.argv[1]}/Entry.mm"))
lexer.input(open(currentfile,"r").read())
while True:
    t = lexer.token()
    if not t:
        break
    # print(t)
    # print(lexer.lexstate)

# print(preprocessed)
lexer.lineno = 1
lexer.begin('INITIAL')

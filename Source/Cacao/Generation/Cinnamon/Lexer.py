import os
import sys
import platform
import queue

reserved = {
    'static': 'STATIC',
    'virtual': 'VIRTUAL',
    'const': 'CONST',
    'stdcall': 'STDCALL',
    'thiscall': 'THISCALL',
    'optcall': 'OPTCALL',
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
t_info_NUM = r"[0-9]+"
t_info_LPAREN = r"\("
t_info_RPAREN = r"\)"

t_info_SEMI = r";"
t_INITIAL_info_COMMA = r","
t_COLON = r":"

t_INITIAL_include_ignore_WHITESPACE = r"[\s\t]"
t_ignore_COMMENT = r'//.*'

def t_template_TEMPLATEDATA(t):
    r"[^<>]+"
    global includenest
    if includenest > 0:
        addFile(t.value)

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
    more = nextFile()
    if more:
        t.lexer.input(open(more).read())
        t.lexer.lineno = 1
        # print(more)
        currentfile = more
        return t.lexer.token()
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
    global fileset, filequeue, currentfile
    f = os.path.join(os.path.dirname(currentfile), f)
    if f not in fileset:
        fileset.add(f)
        filequeue.put(f)

currentfile = ""
def setEntry(f):
    global currentfile
    currentfile = f

# def getNext():
#     tt = lexer.token()
#     if not tt:
#         # raise ValueError("EOF when parsing")
#     return tt

# lexer.input(open("MacOS/Entry.mm","r").read())
# while True:
#     # t = getNext()
#     t = lexer.token()
#     if not t:
#         break
#     print(t)
    # print(lexer.lexstate)



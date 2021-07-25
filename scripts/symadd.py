# export functions to the asm file
# @author alk1m123
# @category Cacao
import os
import re

symbol_path = askFile('hi', 'symbol')
save_path = askFile('hi', 'asm')

symbols = []
addresses = []
mangles = {}

def getAddress(offset):
    return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(offset + 0x100000000)

fm = currentProgram.getFunctionManager()
funcs = list(fm.getFunctions(True)) # True means 'forward'
a = 0

for i in currentProgram.getSymbolTable().getAllSymbols(False):
    n = i.getParentNamespace()
    if (i.getSymbolType() == ghidra.program.model.symbol.SymbolType.FUNCTION and n.getName() != 'std'):
        symbols.append((i, fm.getFunctionAt(i.getAddress())))

def myfun(a):
    return a[0].getName(True)
symbols.sort(key=myfun)

if save_path and symbol_path:

    if os.path.exists(str(save_path)):
        with open(str(save_path), 'r') as prv:
            for l in prv.readlines():
                match = re.match(".+(0x[0-9a-f]+)", l)
                if match:
                    addresses.append(match.group(1))
    file = open(str(save_path), 'a')

    if os.path.exists(str(symbol_path)):
        with open(str(symbol_path), 'r') as sym:
            while True:
                l = sym.readline()
                if l == '':
                    break
                m = sym.readline()
                match = re.match("(?:non-virtual thunk to )?(.+?)\\(.*\\)", l)
                if match:
                    if match.group(1) not in mangles:
                        mangles[match.group(1)] = []
                    mangles[match.group(1)].append((l[:-1], m[:-1]))

    for s, f in symbols:
        if s.getName(True) in mangles and hex(s.getAddress().unsignedOffset - 0x100000000)[:-1] not in addresses:
            mngl = mangles[s.getName(True)]
            if len(mngl) > 1: 
                file.write(';(' + ', '.join(str(a) for a in list(f.getParameters())) + ')\n')
            for l, m in mngl:
                if len(mngl) > 1: 
                    file.write('; ' + l + '\n')
                    file.write(';defit _' + m + ', ' + hex(f.getEntryPoint().unsignedOffset - 0x100000000)[:-1] + '\n')
                else:
                    file.write('; ' + l + '\n')
                    file.write('defit _' + m + ', ' + hex(f.getEntryPoint().unsignedOffset - 0x100000000)[:-1] + '\n')
            file.write('\n')

    # match = re.match("(.+)\\(.*\\)", l)
    # if match:
    #     funcs = [f for f in symbols if match.group(1) == '::'.join(f.getPath())]
    #     if len(funcs) > 0 and hex(funcs[0].getAddress().unsignedOffset - 0x100000000)[:-1] not in addresses:
    #         if len(funcs) > 1:
    #             for s in funcs:
    #                 f = [q for q in functions if s.getAddress().unsignedOffset == q.getEntryPoint().unsignedOffset][0]
    #                 file.write(';clash defit _' + m[:-1] + ', ' + hex(f.getEntryPoint().unsignedOffset - 0x100000000)[:-1] + '\n')
    #                 file.write(';param ' + str(list(f.getParameters())) + '\n')
    #         else:
    #             file.write('defit _' + m[:-1] + ', ' + hex(funcs[0].getAddress().unsignedOffset - 0x100000000)[:-1] + '\n')
    file.close()
else:
    popup('>~<')


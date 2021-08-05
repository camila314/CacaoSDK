# export functions to the cac file
# @author alk1m123
# @category Cacao
import os
import re
import parsecac

symbol_path = askFile('hi', 'symbol')
save_path = askFile('hi', 'cac')

symbols = []
addresses = []
mangles = {}

def getAddress(offset):
    return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(offset + 0x100000000)

fm = currentProgram.getFunctionManager()
funcs = list(fm.getFunctions(True)) # True means 'forward'
a = 0

for i in currentProgram.getSymbolTable().getAllSymbols(False):
    if (i.getSymbolType() == ghidra.program.model.symbol.SymbolType.FUNCTION and i.getParentNamespace() != 'std'):
        symbols.append((i, fm.getFunctionAt(i.getAddress())))

symbols.sort(key=lambda a: a[0].getName(True))

if save_path and symbol_path:

    if os.path.exists(str(save_path)):
        with open(str(save_path), 'r') as prv:
            for l in prv.readlines():
                match = re.match(".+(0x[0-9a-f]+)", l)
                if match:
                    addresses.append(match.group(1))
        with open(str(save_path), 'r') as prv:
            d = prv.read()
            sorder = re.findall(r"(; (?:non-virtual thunk to )?.+?\(.*\)(?: const)?\n.+\n\n)", d)
            rem = re.split(r"; (?:non-virtual thunk to )?(.+?\(.*\)(?: const)?\n.+\n\n)", d)
            print(rem[0])
            print(rem[-1])
    

    if os.path.exists(str(symbol_path)):
        with open(str(symbol_path), 'r') as sym:
            while True:
                l = sym.readline()
                if l == '':
                    break
                m = sym.readline()
                match = re.match(r"(?:non-virtual thunk to )?(.+?)\(.*\)(?: const)?", l)
                if match:
                    if match.group(1) not in mangles:
                        mangles[match.group(1)] = []
                    mangles[match.group(1)].append((l[:-1], m[:-1]))

    for s, f in symbols:
        if s.getName(True) in mangles and hex(s.getAddress().unsignedOffset - 0x100000000)[:-1] not in addresses:
            mngl = mangles[s.getName(True)]
            tx = ""
            if len(mngl) > 1: 
                tx += ';(' + ', '.join(str(a) for a in list(f.getParameters())) + ')\n'
            for l, m in mngl:
                tx += '; ' + l + '\n'
                if len(mngl) > 1: 
                    tx += ';'
                tx += 'defit _' + m + ', ' + hex(f.getEntryPoint().unsignedOffset - 0x100000000)[:-1] + '\n'
            tx += '\n'
            sorder.append(tx)

    with open(str(save_path), 'w') as file:
        def sfun(a):
            m = re.search(r"; (?:non-virtual thunk to )?(.+?\(.*\)(?: const)?\n.+\n\n)", a)
            print(a)
            return m.group(1)
        sorder.sort(key=sfun)
        file.write(rem[0] + "".join(sorder) + rem[-1])
else:
    popup('>~<')


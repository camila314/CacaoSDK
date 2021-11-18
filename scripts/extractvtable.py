# extract vtable from android
# @author alk1m123
# @category Cacao
import os
import json

vtables = {}

mem = currentProgram.getMemory()
addspace = currentProgram.getAddressFactory().getDefaultAddressSpace()

i = 0

jsonPath = askFile('gimme', 'json')

for symbol in currentProgram.getSymbolTable().getAllSymbols(False):
    if "_ZTV" != symbol.getName()[:4]:
        continue

    name = symbol.getName()

    addr = symbol.getAddress().add(4)

    vlist = ["thunk offset 0"]

    tFlag = True
    fBreak = False

    while mem.getInt(addr) != 0:
        val = mem.getInt(addr)
        if val < 0: # thunk offset
            vlist.append("thunk offset " + str(-val))
            tFlag = True
        else: # symbol
            val &= 0xfffffffe
            for sym in currentProgram.getSymbolTable().getSymbols(
                    addspace.getAddress(val)
                ):
                # print(sym.getName())
                if (sym.getName()[:2] == "_Z" or sym.getName()[:2] == "__") and "D2E" not in sym.getName():
                    if tFlag and (sym.getName()[:4] == "_ZTI" or sym.getName()[:4] == "_ZTS"):
                        vlist.append(str(sym.getName()))
                    elif not tFlag and (sym.getName()[:4] == "_ZTI" or sym.getName()[:4] == "_ZTS"):
                        fBreak = True
                        break
                    else:
                        vlist.append(str(sym.getName()))
            tFlag = False
        if fBreak:
            break

        addr = addr.add(4)

    vtables[name] = vlist

    # print(vlist)
    # i += 1
    # if i > 20:
    #     break
                
data = json.dumps(vtables, sort_keys=True, indent=4)

with open(str(jsonPath), "w") as f:
    f.write(data)

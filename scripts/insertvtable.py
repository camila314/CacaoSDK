# insert vtable to macos
# @author alk1m123
# @category Cacao
import os
import json
from ghidra.app.util.demangler import DemanglerOptions, DemanglerUtil
from ghidra.program.model.symbol import SourceType, Namespace
from ghidra.app.util import NamespaceUtils
from ghidra.program.model.data import CategoryPath, StructureDataType, DataTypeConflictHandler

jsonPath = askFile('gimme', 'json')

funcPath = askFile('gimme', 'func')

with open(str(jsonPath), "r") as f:
    data = f.read()

vtables = json.loads(data)
# 706638

msyms = {}

mem = currentProgram.getMemory()
addspace = currentProgram.getAddressFactory().getDefaultAddressSpace()

symiter = currentProgram.getSymbolTable().getAllSymbols(True)
i = 0
for symbol in symiter:
    i += 1
    # if symbol.getAddress().getOffset() >= 0x10068b2c0:
    # print(hex(symbol.getAddress().getOffset()))
    # print(hex(symbol.getAddress().getOffset()), symbol.getName())
    if symbol.getAddress().getOffset() >= 0x1007534f0:
        break
    if "PTR_FUN_" not in symbol.getName() and "PTR_LAB_" not in symbol.getName() and "PTR_copyWithZone_" not in symbol.getName() and "vtable" != symbol.getName() and "_ZTV" not in symbol.getName():
        continue
    # print(hex(symbol.getAddress().getOffset()), i)
    if mem.getLong(symbol.getAddress().subtract(0x10)) != 0:
        continue

    # print(i)
    tvaddr = symbol.getAddress()
    if (tvaddr.getOffset() == 0):
        print(hex(tvaddr.getOffset()))
        continue
    tiaddr = addspace.getAddress(mem.getLong(tvaddr.subtract(0x8)))
    if (tiaddr.getOffset() == 0):
        print(hex(tiaddr.getOffset()))
        continue
    tsaddr = addspace.getAddress(mem.getLong(tiaddr.add(0x8)))
    if (tsaddr.getOffset() == 0):
        print(hex(tsaddr.getOffset()))
        continue
    if not (0x100000000 < tsaddr.getOffset() < 0x101000000):
        print(hex(tsaddr.getOffset()))
        continue

    addr = tsaddr

    tsname = ""
    val = -1
    # print(i)
    while True:
        val = mem.getByte(addr)
        if val == 0:
            break
        tsname += chr(val)
        addr = addr.add(1)
        # print(tsname)

    # print(symbol.getName())

    msyms[tvaddr.getOffset()] = "_ZTV" + tsname
    msyms[tiaddr.getOffset()] = "_ZTI" + tsname
    msyms[tsaddr.getOffset()] = "_ZTS" + tsname

    if "_ZTV" + tsname not in vtables:
        continue

    vlist = vtables["_ZTV" + tsname]

    # if symbol.getName(True) != "GJBaseGameLayer::vtable":
    #     continue

    addr = symbol.getAddress().subtract(0x10)
    # print(addr)

    for name in vlist:
        # print(addr, name)
        if "thunk offset" in name:
            oldThunk = name[13:]
            currentThunk = mem.getLong(addr)
            if currentThunk > 0:
                print(symbol.getName(True), "problem")
        else:
            funcaddr = mem.getLong(addr)
            if addr.getOffset() not in msyms:
                msyms[funcaddr] = name.replace(oldThunk, str(-currentThunk))
        addr = addr.add(0x8)

# print(msyms)

data = json.dumps({hex(k)[:-1]: v for k, v in msyms.items()}, sort_keys=True, indent=4)
with open(str(funcPath), "w") as f:
    f.write(data)

# options = DemanglerOptions()
# print(len(msyms))
# for add, mang in msyms.items():

#     if mang[:2] == "__":
#         print(mang)
#         mang = mang[1:]
#     func = currentProgram.getFunctionManager().getFunctionAt(addr)
#     if "_ZN7cocos2d11CCLayerRGBA10setOpacityEh" in mang:
#         print(func)

#     addr = addspace.getAddress(add)
#     if "_ZN7cocos2d11CCLayerRGBA10setOpacityEh" in mang:
#         print(addr)

#     cmd = DemanglerUtil.demangle(mang)
#     if "_ZN7cocos2d11CCLayerRGBA10setOpacityEh" in mang:
#         print(cmd)
#     if cmd:
#         for symbol in currentProgram.getSymbolTable().getSymbols(addr):
#             symbol.delete()

#         cmd.applyTo(currentProgram, addr, options, monitor)
#         currentProgram.getSymbolTable().createLabel(addr, "_"+mang, SourceType.IMPORTED)

#         for symbol in currentProgram.getSymbolTable().getSymbols(addr):
#             symbol.setSource(SourceType.IMPORTED)

#         func = currentProgram.getFunctionManager().getFunctionAt(addr)
#         if func is None:
#             continue

#         if func.getName()[:6] != "create" and func.getName()[:6] != "shared":
#             func.setCallingConvention("__thiscall")
#         else:
#             print(func.getName())
#             func.setCallingConvention("__cdecl")

#         if func.getParentNamespace().getID() != Namespace.GLOBAL_NAMESPACE_ID:
#             NamespaceUtils.convertNamespaceToClass(func.getParentNamespace())
#             currentProgram.getDataTypeManager().addDataType(StructureDataType(CategoryPath("/GeometryDash"), func.getParentNamespace().getName(), 0), DataTypeConflictHandler.DEFAULT_HANDLER)
#     else:
#         print("Unable to demangle: " + mang);


# add mangled names from the epic asm
# @author alk1m123
# @category Cacao
import os
import re
from ghidra.app.util.demangler import DemanglerOptions, DemanglerUtil
from ghidra.program.model.symbol import SourceType
from ghidra.app.util import NamespaceUtils
from ghidra.program.model.data import CategoryPath, StructureDataType, DataTypeConflictHandler

symbol_path = askFile('hi', 'asm')
options = DemanglerOptions()
with open(str(symbol_path), "r") as f:
	for l in f.readlines():
		m = re.match("defit _(.+), (0x[0-9a-f]+)", l)
		if m:
			name, addr = m.group(1), currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(int(m.group(2), 16) + 0x100000000)
			cmd = DemanglerUtil.demangle(name)
			if cmd:
				for symbol in currentProgram.getSymbolTable().getSymbols(addr):
					symbol.delete()
				cmd.applyTo(currentProgram, addr, options, monitor)
				func = currentProgram.getFunctionManager().getFunctionAt(addr)
				if func.getName() != "create":
					func.setCallingConvention("__thiscall")
				NamespaceUtils.convertNamespaceToClass(func.getParentNamespace())
				currentProgram.getDataTypeManager().addDataType(StructureDataType(CategoryPath("/GeometryDash"), func.getParentNamespace().getName(), 0), DataTypeConflictHandler.DEFAULT_HANDLER)
			else:
				print("Unable to demangle: " + name);
			

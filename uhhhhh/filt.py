import os
import cxxfilt

path = "android.txt"
path2 = "out.txt"
a = 0
file = open(path2, 'w')

with open(path, 'r') as sym:
	for l in sorted(sym.readlines()):  
		try:          
			output = cxxfilt.demangle(l[:-1])
		except:
			pass
		if 'non-virtual thunk to' not in output:
			file.write(f"{output}\n{l[:-1]}\n")
		a += 1
		if a % 1000 == 0:
			print(a)
file.close()


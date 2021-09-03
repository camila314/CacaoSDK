import re

l = []
with open("functionsthunk.txt", "r") as f:
	s = f.readlines()
	for k, m in zip(s[0::2], s[1::2]):
		if 'non-virtual' not in k:
			l.append((k, m))

def sfun(a):
    m = re.search(r"(?:non-virtual thunk to )?(.+?\(.*\)(?: const)?\n.+\n\n)", a)
    print(a)
    return m.group(1)

with open("functions.txt", 'w') as f:
    def sfun(a):
        m = re.search(r"(?:non-virtual thunk to )?(.+?)\(.*\)(?: const)?", a[0])
        print(a)
        return m.group(1)
    l.sort(key=sfun)
    f.write("".join([k + m for k, m in l]))

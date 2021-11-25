import re
with open("symbols.txt", "r") as f:
    data = f.read()
    with open("stdsymbols.txt", "w") as f:
        f.write("\n".join(re.findall(r".+std::.+\n.+", data)))

import os
import re



for root, dirs, files in os.walk("../template/Cacao/include"):
    for name in filter(lambda x: x[-2:] == ".h", files):
        with open(os.path.join(root, name), "r") as h:
            try:
                data = h.read()
                for clm in re.finditer(r"class CC_DLL (\w+).*\n?{([^$]+)\n};", data):
                    cl, content = clm.group(1), clm.group(2);
                    print("\n@interface", cl)
                    for funm in re.finditer(r"    (?:virtual )?(?:static )?(\w[\w* &]+?) (\w+)\(.*\)( const)?;", content):
                        ret, fun, const = funm.group(1), funm.group(2), funm.group(3) is not None
                        print("    ", ret, fun, const)
                    print("@end", cl, "\n")
            except:
                print("error", os.path.join(root, name))

# with open("libcocos2d.demangled.txt") as f:
#     for m in re.finditer(r"(?:\w+?: )(?:virtual )?(?:struct )?(.+)__\w+ (.+)\(.+\)(const )?\n", f.read()):
#         print(m.group(1).replace("BOOL", "bool").replace("class ", "").replace("struct ", "").replace(" *", "*").replace(" &", "&"), m.group(2), m.group(3) is not None)


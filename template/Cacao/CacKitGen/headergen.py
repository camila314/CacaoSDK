import parser
import os
import sys

starter_code = open(os.path.dirname(__file__) + "/base/defs.begin.hpp", "r").read()

ender_code = open(os.path.dirname(__file__) + "/base/defs.end.hpp", "r").read()

def build_cls(funky_cls):
    gdobj = "public GDObj "
    out = ""
    if "cocos2d" in funky_cls.name:
        return ""
    if "CCMenuItemSpriteExtra" in funky_cls.name:
        return ""
    out += f"class {funky_cls.name} : "
    out += ", ".join(f"public {b}" for b in funky_cls.base)
    for b in funky_cls.base:
        if "cocos2d" not in b:
            gdobj = ""
    if len(funky_cls.base) > 0 and gdobj != "":
        out += ", "
    out += gdobj + "{\npublic:\n"
    for info in funky_cls.infos:
        if info.volatile:
            out += "    " + info.data + "\n"
        else:
            static = "static " if info.static else ""
            virtual = "virtual " if info.virtual else ""
            ret = info.ret
            name = info.name
            addr = info.addr
            if info.func:
                param = ', '.join(info.args)
                if ret == '':
                    out += f"    {virtual}{name}({param});\n"
                else:
                    out += f"    {static}{virtual}{ret} {name}({param});\n"
            else:
                if addr is not None:
                    if ret in ["GameModes", "LevelDifficulty"]:
                        out += f"    STRUCT_PARAM({ret}, {name}, {addr});\n"
                    else:
                        out += f"    CLASS_PARAM({ret}, {name}, {addr});\n"
                else:
                    out += f"    {ret} m_{name};\n"
    out += "};\n\n"

    return out

d = parser.parse(sys.argv[1])
open(sys.argv[2], "w").write(starter_code + ''.join(f'class {cl};\n' for cl in d.keys() if "cocos2d" not in cl) + "\n\n" + ''.join(build_cls(cl) for cl in d.values()) + ender_code)

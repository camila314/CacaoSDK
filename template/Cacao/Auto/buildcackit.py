import parsecac
import os
import sys

# yeah
print("cac kit is being builded")
starter_code = open(os.path.dirname(__file__) + "/base/cackit.begin.hpp", "r").read()

build_start = """

template<class D, void*** V>
class ${cls} : public {cls}, public $CacBase {{
 public:
    ~${cls}() {{}}
    typedef {cls}* __thistype;
"""

build_body1 = """
    inline {ret} __attribute__((noinline)) {name}({params}) {{
        if (({ret}(${cls}::*)({params4})){{&${cls}::{name}}} != ({ret}(D::*)({params4})){{&D::{name}}})
            return reinterpret_cast<{ret}(*)(decltype(this){params2})>(m->getOriginal(base+{addr}))(this{params3});
        else return {cls}::{name}({params5});
    }}
"""

build_body1_virtual = """
    inline {ret} __attribute__((noinline)) {name}({params}) override {{
        if (({ret}(${cls}::*)({params4})){{&${cls}::{name}}} != ({ret}(D::*)({params4})){{&D::{name}}})
            return reinterpret_cast<{ret}(*)(decltype(this){params2})>(m->getOriginal(base+{addr}))(this{params3});
        else return {cls}::{name}({params5});
    }}
"""

build_body1_static = """
    static inline {ret} __attribute__((noinline)) {name}({params}) {{
        if (({ret}(*)({params4})){{&${cls}::{name}}} != ({ret}(*)({params4})){{&D::{name}}})
            return reinterpret_cast<{ret}(*)({params2})>(m->getOriginal(base+{addr}))({params3});
        else return {cls}::{name}({params5});
    }}
"""

build_body2_start = """
    ${cls}() {{
    m->registerHook(extract_destructor(this), +[](){{}});
"""
    

build_body2_body = """
        if (({ret}(${cls}::*)({params})){{&${cls}::{name}}} != ({ret}(D::*)({params})){{&D::{name}}})
            m->registerHook(base+{addr}, extract(({ret}(D::*)({params})){{&D::{name}}}));
"""

build_body2_body_static = """
        if (({ret}(*)({params})){{&${cls}::{name}}} != ({ret}(*)({params})){{&D::{name}}})
            m->registerHook(base+{addr}, ({ret}(*)({params})){{&D::{name}}});
"""

build_body2_body_virtual = """
        if (({ret}(${cls}::*)({params})){{&${cls}::{name}}} != ({ret}(D::*)({params})){{&D::{name}}})
            m->registerHook(base+{addr}, extract_virtual(this, ({ret}(D::*)({params})){{&D::{name}}}));
"""

build_body2_end = "    }\n"
build_end = "};\n"

ender_code = ""

def build_cls(funky_cls):
    if "cocos2d" in funky_cls.name:
        return ""
    out = build_start.format(cls=funky_cls.name)

    for info in funky_cls.infos:
        if info.func and info.name[1:] not in funky_cls.name:
            body1 = build_body1
            if info.static:
                body1 = build_body1_static
            elif info.virtual:
                body1 = build_body1_virtual
            if len(info.args) == 0:
                info.args.append("")
            out += body1.format(
                name=info.name,
                ret=info.ret,
                params= '' if info.args[0]=='' else ', '.join([f"{arg} p{i}"for i, arg in enumerate(info.args)]),
                cls=funky_cls.name,
                addr=info.addr, 
                params2 = '' if info.args[0]=='' else ('' if info.static else ', ') + ', '.join(info.args), 
                params3 = '' if info.args[0]=='' else ('' if info.static else ', ') + ', '.join([f"p{i}"for i, _ in enumerate(info.args)]),
                params4 = '' if info.args[0]=='' else ', '.join(info.args),
                params5 = '' if info.args[0]=='' else ', '.join([f"p{i}"for i, _ in enumerate(info.args)])
            )

    out += build_body2_start.format(cls=funky_cls.name)

    for info in funky_cls.infos:
        if info.func and info.name[1:] not in funky_cls.name:
            body2 = build_body2_body
            if info.static:
                body2 = build_body2_body_static
            elif info.virtual:
                body2 = build_body2_body_virtual
            out += body2.format(
                addr=info.addr, 
                ret=info.ret, 
                cls=funky_cls.name, 
                name=info.name, 
                params = ', '.join(info.args)
            )

    out += build_body2_end
    out += build_end
    return out
open(sys.argv[2], "w").write(starter_code + ''.join(build_cls(cl) for cl in parsecac.parse(sys.argv[1]).values()) + ender_code)

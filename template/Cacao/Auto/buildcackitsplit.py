import parsecac
import os
import sys

# yeah

starter_header = open(os.path.dirname(__file__) + "/base/cackit.begin.hpp", "r").read()

header_start = """

template<class D, void*** V>
class ${cls} : public {cls}, public $CacBase {{
public:
    ${cls}();
    ~${cls}();
"""
header_body_normal = "    {ret} {name}({params});\n"
header_body_virtual = "    {ret} {name}({params}) override;\n"
header_body_static = "    static {ret} {name}({params});\n"
header_end = "};\n"

ender_header = open(os.path.dirname(__file__) + "/base/cackit.end.hpp", "r").read()

starter_source = "#include <CacKit.hpp>\n"

source_start = """

template<class D, void*** V>
${cls}<D, V>::~${cls}() {{}}

template<class D, void*** V>
${cls}<D, V>::${cls}() {{
    m->registerHook(extract_destructor(V), +[](){{}});
"""
source_apply_normal = """
    if (({ret}(${cls}::*)({params})){{&${cls}::{name}}} != ({ret}(D::*)({params})){{&D::{name}}})
        m->registerHook(base+{addr}, extract(({ret}(D::*)({params})){{&D::{name}}}));
"""
source_apply_virtual = """
    if (({ret}(${cls}::*)({params})){{&${cls}::{name}}} != ({ret}(D::*)({params})){{&D::{name}}})
        m->registerHook(base+{addr}, extract_virtual(V, ({ret}(D::*)({params})){{&D::{name}}}));
"""
source_apply_static = """
    if (({ret}(*)({params})){{&${cls}::{name}}} != ({ret}(*)({params})){{&D::{name}}})
        m->registerHook(base+{addr}, ({ret}(*)({params})){{&D::{name}}});
"""
source_apply_end = "}\n"
source_body_normal = """
template<class D, void*** V>
{ret} ${cls}<D, V>::{name}({params}) {{
    if (({ret}(${cls}::*)({params4})){{&${cls}::{name}}} != ({ret}(D::*)({params4})){{&D::{name}}})
        return reinterpret_cast<{ret}(*)(decltype(this){params2})>(m->getOriginal(base+{addr}))(this{params3});
    else return {cls}::{name}({params5});
}}
"""
source_body_virtual = """
template<class D, void*** V>
{ret} ${cls}<D, V>::{name}({params}) {{
    if (({ret}(${cls}::*)({params4})){{&${cls}::{name}}} != ({ret}(D::*)({params4})){{&D::{name}}})
        return reinterpret_cast<{ret}(*)(decltype(this){params2})>(m->getOriginal(base+{addr}))(this{params3});
    else return {cls}::{name}({params5});
}}
"""
source_body_static = """
template<class D, void*** V>
{ret} ${cls}<D, V>::{name}({params}) {{
    if (({ret}(*)({params4})){{&${cls}::{name}}} != ({ret}(*)({params4})){{&D::{name}}})
        return reinterpret_cast<{ret}(*)({params2})>(m->getOriginal(base+{addr}))({params3});
    else return {cls}::{name}({params5});
}}
"""

def build_header(funky_cls):
    if "cocos2d" in funky_cls.name:
        return ""

    out = header_start.format(cls=funky_cls.name)
    for info in funky_cls.infos:
        if info.func and info.name[1:] not in funky_cls.name:
            body = header_body_normal
            if info.static:
                body = header_body_static
            elif info.virtual:
                body = header_body_virtual
            out += body.format(
                name=info.name,
                ret=info.ret,
                params= ', '.join(info.args)
            )
    out += header_end
    return out

def build_source(funky_cls):
    if "cocos2d" in funky_cls.name:
        return ""

    out = source_start.format(cls=funky_cls.name)

    for info in funky_cls.infos:
        if info.func and info.name[1:] not in funky_cls.name:
            source_apply = source_apply_normal
            if info.static:
                source_apply = source_apply_static
            elif info.virtual:
                source_apply = source_apply_virtual
            out += source_apply.format(
                addr=info.addr, 
                ret=info.ret, 
                cls=funky_cls.name, 
                name=info.name, 
                params = ', '.join(info.args)
            )
    out += source_apply_end

    for info in funky_cls.infos:
        if info.func and info.name[1:] not in funky_cls.name:
            body = source_body_normal
            if info.static:
                body = source_body_static
            elif info.virtual:
                body = source_body_virtual
            if len(info.args) == 0:
                info.args.append("")
            out += body.format(
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

    return out


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

parsed = parsecac.parse(sys.argv[1]).values()
open(sys.argv[2], "w").write(starter_header + ''.join(build_header(cl) for cl in parsed) + ender_header)
open(sys.argv[3], "w").write(starter_source + ''.join(build_source(cl) for cl in parsed))

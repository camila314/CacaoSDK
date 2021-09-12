from Shared import * 

classes = pickle.load(open("Cinnamon/cinnamon.pickle", "rb"))

build_start = """
template<class D>
class ${cl} : public {cl}, public $CacBase {{
public:
    inline ~${cl}() {{}}
"""

build_body1 = """
    inline {type} {name}({params}) {const}{{
        if (({type}({const}${cl}::*)({params4})){{&${cl}::{name}}} != ({type}({const}D::*)({params4})){{&D::{name}}})
            return reinterpret_cast<{type}(*)({const}D{params2})>(m->getOriginal(base+{offset}))(this{params3});
    }}
"""

build_body1_virtual = """
    inline {type} {name}({params}) {const}{{
        if (({type}({const}${cl}::*)({params4})){{&${cl}::{name}}} != ({type}({const}D::*)({params4})){{&D::{name}}})
            return reinterpret_cast<{type}(*)({const}D{params2})>(m->getOriginal(base+{offset}))(this{params3});
    }}
"""

build_body1_static = """
    inline static {type} {name}({params}) {{
        if (({type}(*)({params4})){{&${cl}::{name}}} != ({type}(*)({params4})){{&D::{name}}})
            return reinterpret_cast<{type}(*)({params4})>(m->getOriginal(base+{offset}))({params3});
    }}
"""

build_body2_start = """
    inline ${cl}() {{
        if (_lock) return;
        _lock = true;
        auto V = *reinterpret_cast<uintptr_t*>(new D());
        _lock = false;
        m->registerHook(extract_destructor(V), +[](){{}});
"""
    

build_body2_body = """
        if (({type}({const}${cl}::*)({params})){{&${cl}::{name}}} != ({type}({const}D::*)({params})){{&D::{name}}})
            m->registerHook(base+{offset}, extract(({type}({const}D::*)({params})){{&D::{name}}}));
"""

build_body2_body_static = """
        if (({type}(*)({params})){{&${cl}::{name}}} != ({type}(*)({params})){{&D::{name}}})
            m->registerHook(base+{offset}, ({type}(*)({params})){{&D::{name}}});
"""

build_body2_body_virtual = """
        if (({type}({const}${cl}::*)({params})){{&${cl}::{name}}} != ({type}({const}D::*)({params})){{&D::{name}}})
            m->registerHook(base+{offset}, extract_virtual(V, ({type}({const}D::*)({params})){{&D::{name}}}));
"""

build_body2_end = "    }\n"
build_end = "};\n"

out = """#pragma once
#include <Base/InterfaceBase.hpp>
"""
for cl in classes:
    if "cocos2d" in cl.name:
        continue

    out += build_start.format(
        cl=cl.name,
    )

    for info in cl.info:
        if not isinstance(info, CinnamonFunction) or info.declare.name[1:] in cl.name:
            continue
        body1 = build_body1
        if info.static:
            body1 = build_body1_static
        elif info.virtual:
            body1 = build_body1_virtual

        out += body1.format(
            name = info.declare.name,
            type = info.declare.type,
            cl = cl.name,
            offset = info.offset, 
            params = ', '.join(arg.getExpr(i) for i, arg in enumerate(info.parameters)),
            params2 = (', ' if not info.static and len(info.parameters) > 0 else "") + ', '.join(arg.getType(i) for i, arg in enumerate(info.parameters)),
            params3 = (', ' if not info.static and len(info.parameters) > 0 else "") + ', '.join(arg.getName(i) for i, arg in enumerate(info.parameters)),
            params4 = ', '.join(arg.getType(i) for i, arg in enumerate(info.parameters)),
            const = "const " if info.const else "",
        )

    out += build_body2_start.format(cl=cl.name)

    for info in cl.info:
        if not isinstance(info, CinnamonFunction) or info.declare.name[1:] in cl.name:
            continue
        body2 = build_body2_body
        if info.static:
            body2 = build_body2_body_static
        elif info.virtual:
            body2 = build_body2_body_virtual
        out += body2.format(
            name = info.declare.name,
            type = info.declare.type,
            cl = cl.name,
            offset = info.offset, 
            params = ', '.join(arg.getType(i) for i, arg in enumerate(info.parameters)),
            const = "const " if info.const else "",
        )

    out += build_body2_end
    out += build_end

with open("../Interface.hpp", "w") as f:
    f.write(out)

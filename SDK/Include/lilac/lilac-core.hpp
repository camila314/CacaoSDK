#pragma once

#include <cstdlib>
#include <utility>

#include "core/include/lilac/core/hook/hook.hpp"
#include "core/include/lilac/core/macros/macros.hpp"

#if _WIN32
#include "core/include/lilac/core/meta/optcall.hpp"
#include "core/include/lilac/core/meta/preproc.hpp"
#endif

// restore dll-interface warnings for other mods

#pragma warning(default: 4067)
#pragma warning(default: 4251)

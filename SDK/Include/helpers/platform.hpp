#pragma once

#include <macros/macros.hpp>
#include "Result.hpp"
#include <string>
#include <vector>
#include <functional>

namespace lilac::utils::clipboard {
    LILAC_DLL bool write(std::string const& data);
    LILAC_DLL std::string read();
}

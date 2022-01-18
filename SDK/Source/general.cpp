#include <helpers/general.hpp>

std::string lilac::utils::timePointAsString(const std::chrono::system_clock::time_point& tp) {
    auto t = std::chrono::system_clock::to_time_t(tp);
    char buf[128];
    strncpy(buf, ctime(&t), 128);
    std::string res = buf;
    res.pop_back();
    return res;
}

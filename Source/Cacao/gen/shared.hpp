#include <broma.hpp>
#include <array>
#include <fmt/format.h>
#include <fmt/ranges.h>

#if _WIN32
    #include <direct.h>
#else
    #include <unistd.h>
#endif

enum CacPlatform {
    kMac,
    kWindows,
    kIos,
    kAndroid,
};

struct CacShare {
    inline static CacPlatform platform;

    static Root init(int argc, char** argv) {
        if (argc < 3)
            cacerr("Invalid number of parameters (expected 2 found %d)", argc-1);

        char const* p = argv[1];
        if (strcmp(p, "windows") == 0)
            platform = kWindows;
        else if (strcmp(p, "mac") == 0)
            platform = kMac;
        else if (strcmp(p, "ios") == 0)
            platform = kIos;
        else if (strcmp(p, "android") == 0)
            platform = kAndroid;
        else cacerr("Invalid platform %s\n", p);

        chdir(argv[2]);
        stringstream s;
        s << "#include <Entry.bro>";
        return parseTokens(lexStream(s));
    }

    static string getAddress(Function const& f) {
        switch (CacShare::platform) {
            case kMac:
                return "base+" + f.binds[kMac];
            case kIos:
                return "base+" + f.binds[kIos];
            case kWindows:
                if (f.name.rfind("cocos2d", 0) == 0) {
                    if (f.function_type == kVirtualFunction)
                        return fmt::format("FunctionScrapper::addressOfVirtual((mem{})(&{}::{}))", f.index, f.parent_class->name, f.name);
                    else
                        return fmt::format("FunctionScrapper::addressOfNonVirtual((mem{})(&{}::{}))", f.index, f.parent_class->name, f.name);
                } else {
                    return "base+" + f.binds[kWindows];
                }
            case kAndroid:
                if (any_of(f.args.begin(), f.args.end(), [](string a) {return a.find("gd::") != string::npos;}))
                    return fmt::format("(uintptr_t)dlsym((void*)base, \"{}\")", f.android_mangle);
                else {
                    if (f.function_type == kVirtualFunction)
                        return fmt::format("FunctionScrapper::addressOfVirtual((mem{})(&{}::{}))", f.index, f.parent_class->name, f.name);
                    else
                        return fmt::format("FunctionScrapper::addressOfNonVirtual((mem{})(&{}::{}))", f.index, f.parent_class->name, f.name);
                }
        }
    }

    static string getHardcode(Member const& m) {
        return m.hardcodes[(std::array<size_t, 4> {0, 1, 0, 2})[CacShare::platform]];
    }

    static string toUnqualified(string qualifiedName) {
        if (qualifiedName.rfind("::") == string::npos) return qualifiedName;
        return qualifiedName.substr(qualifiedName.rfind("::")+2);
    }

    static string formatArgTypes(vector<string> args) {
        return args.size() > 0 ? fmt::format(", {}", fmt::join(args, ", ")) : string("");
    }

    static string formatRawArgTypes(vector<string> args) {
        return args.size() > 0 ? fmt::format("{}", fmt::join(args, ", ")) : string("");
    }

    static string formatRawArgs(vector<string> args) {
        string out = "";
        size_t c = 0;
        for (auto& i : args) {
            out += fmt::format("{} p{},", i, c);
            ++c;
        }
        return out.substr(0, out.size()-1);
    }

    static string formatParameters(size_t paramCount) {
        if (paramCount) {
            vector<string> c;
            for (int i=0; i<paramCount; ++i)
                c.push_back(fmt::format("p{}", i));
            return fmt::format(", {}", fmt::join(c, ", "));
        } else {
            return "";
        }
    }

    static string formatRawParameters(size_t paramCount) {
        if (paramCount) {
            vector<string> c;
            for (int i=0; i<paramCount; ++i)
                c.push_back(fmt::format("p{}", i));
            return fmt::format("{}", fmt::join(c, ", "));
        } else {
            return "";
        }
    }

    static string getConvention(Function const& f) {
        switch (f.function_type) {
            case kConstructor:
            case kDestructor:
            case kRegularFunction:
                return "Membercall";
            case kVirtualFunction:
                return "Thiscall";
            case kStaticFunction:
                return "Optcall";
        }
    }

    static string getReturn(Function const& f) {
        if (f.return_type == "auto") {
            string out = fmt::format("decltype(declval<{}>().{}(", f.parent_class->name, f.name);
            vector<string> args;
            for (string i : f.args) {
                args.push_back(fmt::format("declval<{}>()", i));
            }

            out += fmt::format("{}))", fmt::join(args, ", "));
            return out;
        } else return f.return_type;
    }
};
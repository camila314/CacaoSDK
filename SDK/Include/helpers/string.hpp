#pragma once

#include <macros/macros.hpp>
#include <string>
#include <vector>
#include <functional>

namespace lilac {
    namespace string_utils {
        /**
         * Convert std::wstring to std::string (UTF-8)
         * @param str String to convert
         * @returns std::string
         */
        LILAC_DLL std::string  wideToUtf8(std::wstring const& str);
        /**
         * Convert std::string (UTF-8) to std::wstring
         * @param str String to convert
         * @returns std::wstring
         */
        LILAC_DLL std::wstring utf8ToWide(std::string  const& str);

        LILAC_DLL bool endsWith(std::string  const& str, std::string  const& substr);
        LILAC_DLL bool endsWith(std::wstring const& str, std::wstring const& substr);

        LILAC_DLL std::string & toLowerIP(std::string & str);
        LILAC_DLL std::wstring& toLowerIP(std::wstring& str);

        LILAC_DLL std::string  toLower(std::string  const& str);
        LILAC_DLL std::wstring toLower(std::wstring const& str);

        LILAC_DLL std::string& replaceIP(
            std::string & str,
            std::string const& orig,
            std::string const& repl
        );
        LILAC_DLL std::wstring& replaceIP(
            std::wstring & str,
            std::wstring const& orig,
            std::wstring const& repl
        );

        LILAC_DLL std::string replace(
            std::string const& str,
            std::string const& orig,
            std::string const& repl
        );
        LILAC_DLL std::wstring replace(
            std::wstring const& str,
            std::wstring const& orig,
            std::wstring const& repl
        );

        LILAC_DLL std::vector<std::string> split(
            std::string const& str,
            std::string const& split
        );
        LILAC_DLL std::vector<std::wstring> split(
            std::wstring const& str,
            std::wstring const& split
        );

        LILAC_DLL std::vector<char>    split(std::string  const& str);
        LILAC_DLL std::vector<wchar_t> split(std::wstring const& str);

        LILAC_DLL bool contains(std::string  const& str, std::string  const& subs);
        LILAC_DLL bool contains(std::wstring const& str, std::wstring const& subs);

        LILAC_DLL bool contains(std::string  const& str, char    c);
        LILAC_DLL bool contains(std::wstring const& str, wchar_t c);

        LILAC_DLL bool containsAny(
            std::string const& str,
            std::vector<std::string> const& subs
        );
        LILAC_DLL bool containsAny(
            std::wstring const& str,
            std::vector<std::wstring> const& subs
        );

        LILAC_DLL bool containsAll(
            std::string const& str,
            std::vector<std::string> const& subs
        );
        LILAC_DLL bool containsAll(
            std::wstring const& str,
            std::vector<std::wstring> const& subs
        );

        LILAC_DLL size_t count(std::string  const& str, char c);
        LILAC_DLL size_t count(std::wstring const& str, wchar_t c);

        LILAC_DLL std::string & trimLeftIP(std::string & str);
        LILAC_DLL std::wstring& trimLeftIP(std::wstring& str);
        LILAC_DLL std::string & trimRightIP(std::string & str);
        LILAC_DLL std::wstring& trimRightIP(std::wstring& str);
        LILAC_DLL std::string & trimIP(std::string & str);
        LILAC_DLL std::wstring& trimIP(std::wstring& str);

        LILAC_DLL std::string   trimLeft(std::string  const& str);
        LILAC_DLL std::wstring  trimLeft(std::wstring const& str);
        LILAC_DLL std::string   trimRight(std::string  const& str);
        LILAC_DLL std::wstring  trimRight(std::wstring const& str);
        LILAC_DLL std::string   trim(std::string  const& str);
        LILAC_DLL std::wstring  trim(std::wstring const& str);

        LILAC_DLL std::string & normalizeIP(std::string  & str);
        LILAC_DLL std::wstring& normalizeIP(std::wstring & str);
        LILAC_DLL std::string   normalize(std::string  const& str);
        LILAC_DLL std::wstring  normalize(std::wstring const& str);
    }
}


#pragma once

#include <macros/macros.hpp>
#include "Result.hpp"
#include <string>
#include "types.hpp"
#include <helpers/fs/filesystem.hpp>

namespace lilac::file_utils {
    LILAC_DLL Result<std::string> readString(std::string            const& path);
    LILAC_DLL Result<std::string> readString(std::wstring           const& path);
    LILAC_DLL Result<std::string> readString(ghc::filesystem::path  const& path);
    LILAC_DLL Result<byte_array>  readBinary(std::string            const& path);
    LILAC_DLL Result<byte_array>  readBinary(std::wstring           const& path);
    LILAC_DLL Result<byte_array>  readBinary(ghc::filesystem::path  const& path);

    LILAC_DLL Result<> writeString(std::string           const& path, std::string const& data);
    LILAC_DLL Result<> writeString(std::wstring          const& path, std::string const& data);
    LILAC_DLL Result<> writeString(ghc::filesystem::path const& path, std::string const& data);
    LILAC_DLL Result<> writeBinary(std::string           const& path, byte_array  const& data);
    LILAC_DLL Result<> writeBinary(std::wstring          const& path, byte_array  const& data);
    LILAC_DLL Result<> writeBinary(ghc::filesystem::path const& path, byte_array  const& data);

    LILAC_DLL Result<> createDirectory(std::string const& path);
    LILAC_DLL Result<> createDirectoryAll(std::string const& path);
    LILAC_DLL Result<std::vector<std::string>> listFiles(std::string const& path);
    LILAC_DLL Result<std::vector<std::string>> listFilesRecursively(std::string const& path);
}

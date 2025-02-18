# How to use ?
## Matching compiler
The compiler must match the SFML version, here the 3.0.0 version in 32 bits  
- [WinLibs UCRT 14.2.0 (32-bit)](https://github.com/brechtsanders/winlibs_mingw/releases/download/14.2.0posix-19.1.1-12.0.0-ucrt-r2/winlibs-i686-posix-dwarf-gcc-14.2.0-mingw-w64ucrt-12.0.0-r2.7z)

## CMake options
It is necessary to indicate CMake the path of SFML in the Cmake options :  
- `-DCMAKE_PREFIX_PATH="SFML-3.0.0"`
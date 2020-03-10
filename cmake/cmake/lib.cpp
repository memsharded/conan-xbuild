
#include "cmake/lib.h"

// Requires and build_requires (host)
#include "cmakelib/lib.h"

void cmake(int tabs) {
    #ifdef cmake_EXPORTS
        std::cout << std::string(tabs, '\t') << "> cmake: " << cmake_MESSAGE << " (shared!)" << std::endl;
    #else
        std::cout << std::string(tabs, '\t') << "> cmake: " << cmake_MESSAGE << std::endl;
    #endif

    // Requires and build_requires (host)
    cmakelib_header(tabs+1);
    cmakelib(tabs+1);
}
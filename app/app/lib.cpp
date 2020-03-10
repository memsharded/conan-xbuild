
#include "app/lib.h"

// Requires and build_requires (host)
#include "library/lib.h"

void app(int tabs) {
    #ifdef app_EXPORTS
        std::cout << std::string(tabs, '\t') << "> app: " << app_MESSAGE << " (shared!)" << std::endl;
    #else
        std::cout << std::string(tabs, '\t') << "> app: " << app_MESSAGE << std::endl;
    #endif

    // Requires and build_requires (host)
    library_header(tabs+1);
    library(tabs+1);
}

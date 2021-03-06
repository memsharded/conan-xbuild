
#pragma once

#include <iostream>
#include <string>
#include "library.h"
#include "library_export.h"

LIBRARY_EXPORT void library(int tabs);

static void library_header(int tabs) {
    std::cout << std::string(tabs, '\t') << "> library_header: " << library_MESSAGE << std::endl;
}

#pragma once

#include <iostream>
#include "cmake.h"

void app(int tabs);

static void app_header(int tabs) {
    std::cout << std::string(tabs, '\t') << "> app_header: " << app_MESSAGE  << std::endl;
}
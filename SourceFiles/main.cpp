#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "../header files/test.h"

int main() {
    std::cout << addition(5,6) << std::endl;
#ifdef __linux__
    system("ls");
#elif _WIN64
    system("dir");
#endif
    return 0;
}

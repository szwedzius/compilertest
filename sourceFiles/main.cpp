#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "../headerFiles/test.h"

int main() {
    std::cout << addition(5,6) << std::endl;
#ifdef __linux__
    system("ls");
    std::cout<<"using linux";
#elif _WIN64
    system("dir");
    std::cout<<"using windows";
#endif
    return 0;
}

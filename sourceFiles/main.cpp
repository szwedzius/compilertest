#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "../headerFiles/test.h"

std::string user = getenv("username");
std::string autostartPath = "C:\\Users\\"+ user +"\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup";

int main() {
    //std::cout << addition(5,6) << std::endl;
#ifdef __linux__
    system("ls");
    std::cout<<"using linux";
#elif _WIN64
    //system("cd ");
    //system("dir");
    std::cout<<"using windows aren't we " << user << "\n";
    std::cout<<"Here is the path to your autostart "<< autostartPath;
#endif
    return 0;
}

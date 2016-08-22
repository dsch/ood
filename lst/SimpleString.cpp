#include <iostream>
#include <string>
#include <cstring>

int main()
{
    char name[20] = "David";
    strcat(name, " Schneider");
    std::cout << name << std::endl;

    std::string hello("Hello");
    hello += " World";
    std::cout << hello << std::endl;
    return 0;
}

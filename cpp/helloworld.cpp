#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello World C++" << std::endl;
    std::string msg;
    std::getline(std::cin, msg);
    std::cout << msg << std::endl;
    return 0;
}
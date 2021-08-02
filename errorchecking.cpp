#include <iostream>

int getValue()
{
std::cerr << "getValue() called\n";
    return 4;
}

int main()
{
std::cout << "main() called\n";
    std::cout << getValue();

    return 0;
}
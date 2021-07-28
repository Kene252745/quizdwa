#include <iostream>


int readNumber() {

    std::cout << "Enter an integer a: ";
    int a{};
    std::cin >> a;
    return a;
}


void writeAnswer(int x) {

    std::cout << "Your input is " << x;
}
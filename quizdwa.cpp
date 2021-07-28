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

int main()
{
    int a{ readNumber() };
    int b{ readNumber() };
    writeAnswer(a+b);  
    return 0; 
}



/*int readNumber()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The answer is " << x << '\n';
}

int main()
{
    int x{ readNumber() };
    int y{ readNumber() };
    writeAnswer(x + y); // using operator+ to pass the sum of x and y to writeAnswer()
    return 0;
}*/


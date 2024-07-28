#include<iostream>

int main(int argc, char const *argv[])
{
    // 傳統
    int a = 0 , b = 0 , c = 0;
    // C++ 11
    // int a{0}, b{0}, c{0};

    std::cout << "Enter two numbers: ";
    // cin --> console input
    std::cin >> a >> b;
    c = a + b;
    std::cout << "The sum is: " << c << std::endl;
    return 0;
}

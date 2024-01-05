#include <iostream>
using namespace std;

int main()
{
    string name;
    string prg;
    std::cout << "Enter your Name: ";
    std::cin >> name;
    std::cout << "Enter your field of study: ";
    std::cin >> prg;
    std::cout << "Hello, Mr." << name <<
    " you are pursuing a degree in "
    << prg << std::endl;
    return 0;
}
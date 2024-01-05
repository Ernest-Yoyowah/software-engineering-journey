#include <iostream>
using namespace std;

int main()
{
    // Initialize variables
    int a = 1;
    int b = 2;
    int temp = 0;
    // Swap Variables
    temp = a;
    a = b;
    b = temp;
    std:: cout << "The value of a is " << a <<
    " and the value of b is " << b<< std::endl;

    return 0;
}
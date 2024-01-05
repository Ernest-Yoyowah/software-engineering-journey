#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    // Declear variables
    double x, y, num;
    string str;
    //
    std:: cout << "2 to the power of 6 = "
    << pow(2,6) << endl;

    // To use variables instead
    x = 10;
    y = 2;
    num = 9;
    std:: cout << x << " to the power of "
    << y << " is " << pow(x,y) << endl;

    std:: cout << "The square root of "
    << num << " is " << sqrt(num) << endl;

    str = "Yo Wossop";
    std:: cout << "Lenght of string = "
    << str.length() << endl;
    return 0;
}
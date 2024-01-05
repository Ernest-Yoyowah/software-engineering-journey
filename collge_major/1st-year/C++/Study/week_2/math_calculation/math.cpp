#include <iostream>
using namespace std;

int main()
{
    /*
    order of presedence
       ()
    * and /
    + and -

    // increament operators
    int x = 10;
    int y = x++; // x = 11; y = 10
    int z = ++x; // z = 12; x = 12
    */

    // Exercise assume x = 10 and y = 5;

    double x = 10;
    double y = 5;
    double z = (x + 10) / (3 * y);
    std::cout << z << std::endl;
    return 0;
}
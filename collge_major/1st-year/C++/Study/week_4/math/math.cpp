#include <iostream>
using namespace std;

int main()
{
    double p = 15.00;
    double q = 10.00;
    double n = p - 8;

    double t = p + 5 * q - n;
    n = t - p;
    t++;
    cout << "p " << p << "q " << q << "n " << n
         << "t " << t << endl;
    return 0;
}

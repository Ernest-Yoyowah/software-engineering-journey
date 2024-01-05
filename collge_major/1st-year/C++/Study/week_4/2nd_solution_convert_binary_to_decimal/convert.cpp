#include <iostream>

using namespace std;

int main()
{
    int decimal;
    cout << "Enter the decimal number: ";
    cin >> decimal;
    cout << "Decimal number: " << decimal << endl;

    int binary = 0;
    int power = 1;

    while (decimal > 0)
    {
        int remainder = decimal % 2;
        binary += remainder * power;
        decimal /= 2;
        power *= 10;
    }

    cout << "The binary is : " << binary << endl;
    return 0;
}
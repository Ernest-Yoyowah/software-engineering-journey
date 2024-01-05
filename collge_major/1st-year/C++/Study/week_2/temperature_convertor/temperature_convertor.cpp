#include <iostream>

using namespace std;

int main()
{
    // Declear Variables
    double fahrenheit;
    double celsius;

    // Accept temperature in fehrenheit
    cout << "Enter Temperature(Fehreheit): ";
    cin >> fahrenheit;

    // Conversion rate
    celsius = (fahrenheit - 32) * (5.0 / 9.0);

    // Output
    cout << "Celsius: " << celsius << endl;

    return 0;
}
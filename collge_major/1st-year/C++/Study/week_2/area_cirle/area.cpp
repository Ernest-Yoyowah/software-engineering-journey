#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declear Variables
    double area;
    double radius;
    const double PI = 3.142;

    // Accept Radius
    cout << "Enter the raius: ";
    cin >> radius;

    // Calculate Area
    double radius_square= pow(radius, 2);
    area = PI * (radius_square);

    //Output
    cout << "Area: " << area << endl;

    return 0;
}
#include <iostream>
using namespace std;

// named constants
const double inches_per_foot = 12;
const double cm_per_inch = 2.54;

int main()
{
    // Variables
    double feet, inch, cm;

    std:: cout<< "Enter lenght in feet: ";
    std:: cin >> feet;
    std:: cout << "Enter length in inches: ";
    std:: cin >> inch;

    // convert feet into inches and add to given inches
    double totalInches = (feet * inches_per_foot) + inch;

    // convert totalInches to cm
    cm = (cm_per_inch * totalInches);

    std::cout << "Lenght in centimeters: "<< cm << std::endl;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    // Delclare Variables
    double sales = 95000;
    double state_tax;
    double county_tax;
    int total_tax;

    // Calculate state_tax
    const double state_tax_rate = .04;
    state_tax = (sales * state_tax_rate);

    // Calculate county_tax
    const double county_tax_rate = .02;
    county_tax = (sales * county_tax_rate);

    // Calculate Total Tax
    total_tax = (state_tax + county_tax);

    // Output
    cout << "Sales: $"<< sales << endl
         << "State Tax: $" << state_tax << endl
         << "Conty Tax: $" << county_tax << endl
         << "Total Tax: $" << total_tax << endl;

    return 0;

}
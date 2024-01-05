#include <iostream>
using namespace std;

int main()
{
    // Variables to store sales data
    double AmountSalesDay = 0.0;
    int NumberOfSalesDay = 0;
    double AmountSalesWeek = 0.0;
    int NumberOfSalesWeek = 0;
    double AmountSalesMonth = 0.0;
    int NumberOfSalesMonth = 0;

    // Display a welcome message
    cout << "Welcome to the  Calculator for Average Sales!" << endl;

    // Input sales data for a day
    do
    {
        cout << "Enter sales made for a day: $";
        cin >> AmountSalesDay;
    } while (AmountSalesDay <= 0);

    do
    {
        cout << "Enter the number of sales transactions made for a day: ";
        cin >> NumberOfSalesDay;
    } while (NumberOfSalesDay <= 0);

    // Input sales data for a week
    do
    {
        cout << "Enter the sales made for a week: $";
        cin >> AmountSalesWeek;
    } while (AmountSalesWeek <= 0);

    do
    {
        cout << "Enter the number of sales transactions made for a week: $";
        cin >> NumberOfSalesWeek;
    } while (NumberOfSalesWeek <= 0);

    // Input sales data for a month
    do
    {
        cout << "Enter the total amount sales made for a month: $";
        cin >> AmountSalesMonth;
    } while (AmountSalesMonth <= 0);

    do
    {
        cout << "Enter the number of sales transactions made for a month: $";
        cin >> NumberOfSalesMonth;
    } while (NumberOfSalesMonth <= 0);

    // Calculate average sales
    double dayAverage = AmountSalesDay / NumberOfSalesDay;
    double weekAverage = AmountSalesWeek / NumberOfSalesWeek;
    double monthAverage = AmountSalesMonth / NumberOfSalesMonth;

    // Display the calculated average sales
    cout << "Average Sales for a Day: $" << dayAverage << endl;
    cout << "Average Sales for a Week: $" << weekAverage << endl;
    cout << "Average Sales for a Month: $" << monthAverage << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    string firstName, surName;
    cout << "Enter your First Name: ";
    cin >> firstName;
    cout << "Enter your Surname: ";
    cin >> surName;

    double baseSalary;
    cout << "Enter your base salary: $";
    cin >> baseSalary;

    int yearsOfWork;
    cout << "How many years have you worked for ? ";
    cin >> yearsOfWork;

    double bonus;
    if (yearsOfWork <= 5)
    {
        bonus = yearsOfWork * .1;
    }
    else
    {
        bonus = yearsOfWork * .2;
    }

    double totalSales;
    double commission;
    cout << "Enter your total sales made: $";
    cin >> totalSales;

    if (totalSales >= 500 && totalSales < 10000)
    {
        commission = totalSales * .3;
    }
    else if (totalSales >= 10000)
    {
        commission = totalSales * .6;
    }
    int payme = baseSalary + bonus + commission;
    cout << "--------------------Your Salary Summary---------------------" << endl;
    cout << "Name: " << firstName << " " << surName << endl
         << "Years Of Work: " << yearsOfWork << endl
         << "Base Salary: $" << baseSalary << endl
         << "Total Sales: $" << totalSales << endl
         << "Additional Bonus: $" << commission << endl
         << "PayCheck: $" << payme << endl;

    return 0;
}
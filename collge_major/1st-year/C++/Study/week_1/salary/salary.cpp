#include <iostream>
using namespace std;

int main()
{
    string name;
    double baseSalary;
    int yearsWorked;
    double totalSales;
    double bonus = 0;
    double totalCommision = 0;
    std::cout << "Enter your Name: ";
    std::cin >> name;
    std::cout << "Enter your base salary: $";
    std::cin >> baseSalary;
    std::cout << "How many years have you worked for: ";
    std::cin >> yearsWorked;
    std::cout << "Total sales made: $";
    std::cin >> totalSales;

    if (yearsWorked <= 5)
    {
        bonus = yearsWorked * .1;
    }
    else
    {
        bonus = yearsWorked * .2;
    }
    if (totalSales >= 5000 && totalSales < 10000)
    {
        totalCommision = totalSales * 0.03;
    }
    else if (totalSales >= 10000)
    {
        totalCommision = totalSales * .06;
    }

    double pay = baseSalary + bonus + totalCommision;
    printf("Your Paycheck Mr.%s\n", name.c_str());
    printf("Salary: $%.2f\n", baseSalary);
    printf("Bonus: $%.2f\n", bonus);
    printf("Commision: $%.2f\n", totalCommision);
    printf("Paycheck: $%.2f\n", pay);
    return 0;
}
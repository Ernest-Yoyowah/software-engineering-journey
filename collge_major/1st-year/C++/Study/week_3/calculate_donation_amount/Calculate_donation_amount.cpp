#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // Declear variables
    string movieName;
    double adultTicketPrice, childTicketPrice;
    int numAdultTicketSold, numChildTicketSold;
    double donationPercentage;

    // Promp user for inputs
    cout << "Enter movie name:  ";
    cin >> movieName;

    cout << "Enter the adult ticket price: $";
    cin >> adultTicketPrice;

    cout << "Enter the child ticket price: $";
    cin >> childTicketPrice;

    cout << "Enter the number of adult tickets sold: ";
    cin >> numAdultTicketSold;

    cout << "Enter the number of child tickets sold: ";
    cin >> numChildTicketSold;

    cout << "Enter the percentage of gross amount to be donated (%): " << endl;
    cin >> donationPercentage;

    // Calculate number of tickets sold
    int totalTicketsSold = (numAdultTicketSold + numChildTicketSold);

    // Calculate the total gross amount
    double totalGrossAmount = (adultTicketPrice * numAdultTicketSold) + (childTicketPrice * numChildTicketSold);

    // Calculate the donation amount
    double donationAmount = (donationPercentage / 100) * totalGrossAmount;

    // Display the results
    cout << "\n_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
    cout << "Movie Name:................. " << movieName << endl;
    cout << "Number of Tickets Sold:..... $" << totalGrossAmount << endl;
    cout << "Gross Ticket Sales:......... $" << totalGrossAmount << endl;
    cout << "Donation Percentage:........ " << donationPercentage << "%" << endl;
    cout << "Donation Amount:............ $" << fixed << setprecision(2) << donationAmount << endl;

    return 0;
}
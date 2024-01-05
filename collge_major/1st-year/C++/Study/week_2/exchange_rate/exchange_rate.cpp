#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double USD, GHC;

    // Accept Input (Dollar)
    std::cout << "US Dollar: ";
    std::cin >> USD;

    // Convert USD to GHC
    GHC = USD * 3.9;

    // Display the result
    std::cout << "Equivalent amount in GHC: " << GHC << endl;

    return 0;
}

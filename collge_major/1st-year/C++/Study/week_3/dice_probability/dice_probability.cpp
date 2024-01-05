#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialize an array to store the frequency of each outcome
    int frequency[6] = {0};

    // Set the total number of rolls
    int totalRolls = 1000; // You can change this as needed

    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Simulate dice rolls
    for (int i = 0; i < totalRolls; ++i) {
        int roll = (std::rand() % 6) + 1; // Generate a random number between 1 and 6
        frequency[roll - 1]++; // Increment the corresponding element in the array
    }

    // Calculate and display probabilities
    std::cout << "Probability of Rolling Each Number:\n";
    for (int i = 0; i < 6; ++i) {
        double probability = static_cast<double>(frequency[i]) / totalRolls;
        std::cout << "Number " << (i + 1) << ": " << probability << std::endl;
    }

    return 0;
}

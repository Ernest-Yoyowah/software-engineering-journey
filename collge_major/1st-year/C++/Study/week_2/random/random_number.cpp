#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(nullptr));
    int random_number = rand() % 100; // % specifies range of numbers (eg: 100, number must be <=100)
    cout << random_number << endl;

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const short max_number = 6;
    const short min_number = 1;
    srand(time(nullptr));
    short die1 = (rand() % (max_number - min_number + 1)) + min_number;
    short die2 = (rand() % (max_number - min_number + 1)) + min_number;

    cout << "First die: " << die1 << endl << "Second die: " << die2 << endl;

    return 0;
}
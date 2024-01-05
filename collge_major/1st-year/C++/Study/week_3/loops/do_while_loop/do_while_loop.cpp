#include <iostream>

using namespace std;

int main()
{
    char response;

    do
    {
        cout << "Yes or No? ";
        cin >> response;
        if ((response != 'y') && (response != 'n'))
            cout << "Please type y or n:";
    } while ((response != 'y') && (response != 'n'));

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    double Dollar, GhCedis;
    cout << "Enter Dollars: $";
    cin >> Dollar;

    // Conersion rate
    GhCedis = Dollar * 3.9;

    cout << "$" << Dollar << " Is equivalent to"
         << " GH₵" << GhCedis << endl;

    return 0;
}
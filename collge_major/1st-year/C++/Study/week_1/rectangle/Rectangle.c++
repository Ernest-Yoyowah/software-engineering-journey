//1. start
//2. read inputs
//3. calculate parameter = lenght * width
//4. display paramter
//5. stop


#include <iostream>
using namespace std;

int main()
{
    int lenght;
    int width;
    cout << "Enter the lenght: " << endl;
    cin  >> lenght;

    cout << "Enter the width: " <<  endl;
    cin  >> width;

    int parameter = 2* (lenght + width);
    int area = (lenght * width);

    cout << "The parameter of the recangle is: " << parameter
         << endl;
    cout << "The area of the parameter is: " << area << endl;
}
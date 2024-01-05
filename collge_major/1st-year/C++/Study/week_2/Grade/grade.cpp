#include <iostream>
using namespace std;

int main()
{
    // Declear Variables
    float score;
    string name;
    // Accept User Inputs
    std:: cout << "Student Name: ";
    std:: cin >> name;
    std:: cout << "Enter Score: ";
    std:: cin >> score;
    // Process score into grade
    if (score >= 80 && score <= 100)
    {
        std:: cout << "Student Name: " << name << " Score: " << score << " Grade: A"<< endl;
    }
       else if (score >= 70 && score <= 79)
    {
        std:: cout << "Student Name: " << name << " Score: " << score << " Grade: B"<< endl;
    }
     else if (score >= 60 && score <= 69)
    {
        std:: cout << "Student Name: " << name << " Score: " << score << " Grade: C"<< endl;
    }
     else if (score >= 50 && score <= 59)
    {
        std:: cout << "Student Name: " << name << " Score: " << score << " Grade: D"<< endl;
    }
    else if (score < 50)
    {
        std:: cout << "Student Name: " << name << " Score: " << score << " Grade: F"<< endl;
    }
    else
    {
        std:: cout << "Invalid" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    string name;
    int score1, score2, score3, score4, score5, sum, average;
    string grade;

    std:: cout << "Enter your name: ";
    std:: cin >> name;
    std:: cout << "Enter score 1: ";
    std:: cin >> score1;
    std:: cout << "Enter score 2: ";
    std:: cin >> score2;
    std:: cout << "Enter score 3: ";
    std:: cin >> score3;
    std:: cout << "Enter score 4: ";
    std:: cin >> score4;
    std:: cout << "Enter score 5: ";
    std:: cin >> score5;

    sum = (score1 + score2 + score3 + score4 + score5);
    average = sum/ 5;

    if (average >= 80)
    {
        grade = "A";
    }
    else if (average >= 70 && average <= 79)
    {
        grade = "B";
    }
    else if (average >= 60 && average <= 69)
    {
        grade = "C+";
    }
    else if (average >= 50 && average <= 59)
    {
        grade = "C-";
    }
    else if (average >= 40 && average <= 49)
    {
        grade = "D";
    }
    else
    {
        grade = "F";
    }


    printf ("Student Name: %s\n", name.c_str());
    printf("Score 1: %i\n", score1);
    printf("Score 2: %i\n", score2);
    printf("Score 3: %i\n", score3);
    printf("Score 4: %i\n", score4);
    printf("Score 5: %i\n", score5);
    printf("Average Score: %i\nGrade: %s\n", average, grade.c_str());
    return 0;
}
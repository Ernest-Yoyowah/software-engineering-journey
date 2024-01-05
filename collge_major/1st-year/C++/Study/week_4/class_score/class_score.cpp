#include <iostream>

using namespace std;

// Define the grading thresholds.
const int A_THRESHOLD = 90;
const int B_THRESHOLD = 80;
const int C_THRESHOLD = 70;
const int D_THRESHOLD = 60;

// Calculate the average test score for a student.
float calculateAverageTestScore(int testScores[])
{
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += testScores[i];
    }
    return sum / 5;
}

// Determine the grade for a student.
char determineGrade(float averageTestScore)
{
    if (averageTestScore >= A_THRESHOLD)
    {
        return 'A';
    }
    else if (averageTestScore >= B_THRESHOLD && averageTestScore < A_THRESHOLD)
    {
        return 'B';
    }
    else if (averageTestScore >= C_THRESHOLD && averageTestScore < B_THRESHOLD)
    {
        return 'C';
    }
    else if (averageTestScore >= D_THRESHOLD && averageTestScore < C_THRESHOLD)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

// Calculate the class average.
float calculateClassAverage(float studentAverageTestScores[], int numberOfStudents)
{
    float totalAverage = 0;
    for (int i = 0; i < numberOfStudents; i++)
    {
        totalAverage += studentAverageTestScores[i];
    }
    return totalAverage / numberOfStudents;
}

int main()
{
    // Declare an array to store the names of the students.
    string studentNames[10];

    // Declare an array to store the test scores for each student.
    int studentTestScores[10][5];

    // Initialize the total average to 0.
    float totalAverage = 0;

    // Prompt the user to enter the names and test scores for the students.
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> studentNames[i];

        cout << "Enter the test scores for student " << i + 1 << ": ";
        for (int j = 0; j < 5; j++)
        {
            cin >> studentTestScores[i][j];
        }
    }

    // Calculate the average test score for each student.
    float studentAverageTestScores[10];
    for (int i = 0; i < 10; i++)
    {
        studentAverageTestScores[i] = calculateAverageTestScore(studentTestScores[i]);
    }

    // Calculate the grade for each student.
    char studentGrades[10];
    for (int i = 0; i < 10; i++)
    {
        studentGrades[i] = determineGrade(studentAverageTestScores[i]);
    }

    // Calculate the class average.
    float classAverage = calculateClassAverage(studentAverageTestScores, 10);

    // Display the results to the user.
    cout << "Student Name"
         << "\t\t"
         << "Average Test Score"
         << "\t\t"
         << "Grade" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << studentNames[i] << "\t\t" << studentAverageTestScores[i] << "\t\t" << studentGrades[i] << endl;
    }

    cout << "Class Average: " << classAverage << endl;

    return 0;
}

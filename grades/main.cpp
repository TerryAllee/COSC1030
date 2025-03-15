//
// Name: Terry Allee    
// Date: March 14, 2025
// Grades Programming Project
// COSC 1030
//

#include <iostream>
#include <vector>

using namespace std;

// Function prototypes
void calculateAverage(const vector<int>& grades, double& avg);
char getLetterGrade(double avg);

int main() {
    int numGrades;
    cout << "Enter the number of grades: ";
    cin >> numGrades;

    vector<int> grades(numGrades);
    cout << "Enter the grades: ";
    for (int i = 0; i < numGrades; i++) {
        cin >> grades [i];
    }

    double average = 0.0;
    calculateAverage(grades, average); // Pass by reference

    char letterGrade = getLetterGrade(average);

    //Display the results
    cout << "Numeric Average: " << average << endl;
    cout << "Letter Grade: " << letterGrade << endl;

    return 0;

}

// Function to calculate average (pass by reference)
void calculateAverage(const vector<int>& grades, double& avg) {
    int sum = 0;
    for (int grade : grades) {
        sum += grade;
    }
    avg = sum / static_cast <double> (grades.size());

    if (grades.size() == 0) {
        avg = 0;
        return;

    }

}

// Function for letter grade
char getLetterGrade(double avg) {
    if (avg >= 90) return 'A';
    if (avg >= 80) return 'B';
    if (avg >= 70) return 'C';
    if (avg >= 60) return 'D';
    return 'F';
}
//
// Name: Terry Allee
// Date: March 2, 2025
// Pennies for Pay Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std; 

int main() {
    int days;
    double salary = .01, totalPay = 0.0;

    // Input validation: Do not accept a work day less than 1 day
    do {
        cout << "Enter the number of days worked (must be at least 1 day): ";
        cin >> days;
        if (days < 1)
            cout << "Invalid input. Please enter a number greater than or equal to 1.\n";
    } while (days < 1);

    // Display table header
    cout << "\nDay\tSalary ($)" << endl;
    cout << "-------------------" << endl;

    // Loop the calculate salary and display earnings for each day
    for (int day = 1; day <= days ; ++day) {
        cout << day << "\t" << fixed << setprecision(2) << salary << endl;
        totalPay += salary;
        salary *=2; // Double's salary for the next day
    }

    // Display the total pay
    cout << "\nTotal pay after " << days << "days: $" << fixed << setprecision(2) << totalPay << endl;

    return 0;

}


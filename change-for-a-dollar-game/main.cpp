//
// Name: Terry Allee
// Date: March 2
// Change for a Dollar Game Programming Project
// COSC 1030
//

#include <iostream>

using namespace std;

int main() {
    int pennies, nickels, dimes, quarters;
    const int PENNY_VALUE = 1; 
    const int NICKEL_VALUE = 5;
    const int DIME_VALUE = 10;
    const int QUARTER_VALUE = 25;
    const int DOLLAR_VALUE = 100;

    // Request input from user
    cout << "Welcome to the Change Counting Game!\n";
    cout << "Enter the number of coins needed to make exactly $1.00.\n";
    
    cout << "Enter the number of pennies: ";
    cin >> pennies;

    cout << "Enter the number of nickles: ";
    cin >> nickels;

    cout << "Enter the number of dimes: ";
    cin >> dimes;

    cout << "Enter the number of quarters: ";
    cin >> quarters;

    // Add the total value
    int totalCents = (pennies * PENNY_VALUE) +
                     (nickels * NICKEL_VALUE) +
                     (dimes * DIME_VALUE) +
                     (pennies * PENNY_VALUE) +
                     (quarters * QUARTER_VALUE);

    // Check the result
    if (totalCents == DOLLAR_VALUE) {
        cout << "Congratulations! You entered $1.00 exactly. YOU WIN!\n";
    } else if (totalCents > DOLLAR_VALUE) {
        cout << "OOPS! The amount you entered is more than a $1.00.\n";
    } else {
        cout << "OOPS! The amount you entered is less than a $1.00.\n";
    }
    
    return 0;
}
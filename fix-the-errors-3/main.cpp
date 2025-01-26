//
// Name Terry Allee
// Date January 25
// Fix the Errors #3 Programming Project
// COSC 1030
//

// This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.

#include <iostream>
using namespace std;

int main()
{

	float firstNumber;
	float secondNumber;

	// Prompt user to enter the first number.
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin >> firstNumber;

	// Prompt user to enter the second number.
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> secondNumber;

	// Echo print the input.
	cout << endl << "You input the numbers as " << firstNumber
		<< " and " << secondNumber << endl;

	// Now we will swap the values.
	float temp = firstNumber; // temporary variable holds the first number
	firstNumber = secondNumber;
	secondNumber = temp;

	// Output the values.
	cout << "After swapping, the values of the two numbers are "
		<< firstNumber << " and " << secondNumber << endl; return 0;
}

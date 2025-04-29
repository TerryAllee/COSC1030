//
// Name: Terry Allee
// Date: April 28
// String Length Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

// Function will count how many characters are in the string. 
int countCharacters(const char *str) {
    int count = 0;
    //Loop until you find the end of the string
    while (str[count] != '\0') {
        count++;
    }

    // Return number of characters
    return count;
}

int main () {
    const int SIZE = 100;
    char inputString[SIZE];

    // Ask the user to enter a string
    cout << "Please enter a string: ";
    cin.getline (inputString, SIZE);

    // Call the function to count characters and store the result
    int length = countCharacters(inputString);

    //Display the number of characters
    cout << "Your string has " << length << " characters." << endl;

    return 0;
}

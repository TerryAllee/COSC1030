//
// Name: Terry Allee
// Date: April 20, 2025
// Backward String Programming Project
// COSC 1030
//

#include <iostream>
#include <cstring>
using namespace std;

// Create function prototype
void backward(char *);

int main()
{
    // Define the array to hold the input
    const int SIZE = 80;
    char input [SIZE];

    // user enters a string
    cout << "Enter a string and I will display it backwards:\n";
    cin.getline(input, SIZE);

    // Display it backward
    backward(input);
    return 0;

}

// The backward function accepts a pointer to a C-string and displays that string backward

void backward(char *str)

{
    // Get the subscripts through the string, displaying each character from the last to the first
    int last = strlen(str) - 1;
    
    //Work backwards throught the string, displaying each character from the last to the first.
    for (int index = last; index >= 0; index--)
        cout << str[index];

    // End the line.
    cout << endl;
}
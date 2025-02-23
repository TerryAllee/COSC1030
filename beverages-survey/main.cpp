//
// Name: Terry Allee
// Date: Feb 23, 2025
// Beverages Survey Programming Project
// COSC 1030
//

#include <iostream>

using namespace std; 

// Variables to help tally the votes chosen by beverage
int main() {
    int coffee = 0, tea = 0, coke = 0, orangeJuice = 0;
    int choice;

    cout << "Beverage Survey:  Choose your favorite beverage (Enter -1 to stop program)" <<endl;
    cout << "1. Coffee\n2. Tea\n3. Coke\n4. Orange Juice" << endl;
    
    // Loop will run until user enters -1 to stop program
    while (true) {
        cout << "Enter your favorite beverage (1-4) or -1 to stop program:  ";
        cin >> choice; 

        if (choice ==-1) {
            break;
        }
        
        // Switch statement will increment count when the beverage is selected
        switch (choice) {
            case 1:
                coffee++;
                break;
            case 2:
                tea++;
                break;
            case 3:
                coke++;
                break;
            case 4:
                orangeJuice++;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4. " << endl;


        }
    }
    // Displays the final tally for each beverage chosen 
    cout << "\nSurvey Results:" << endl;
    cout << "Coffee: " << coffee << "votes" << endl;
    cout << "Tea: " << tea << "votes" << endl;
    cout << "Coke: " << coke << "votes" << endl;
    cout << "Orange Juice: " << orangeJuice << "votes" << endl; 

    return 0;
}
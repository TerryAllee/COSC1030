//
// Name: Terry Allee
// Date: February 15th
// University of Guiness Programming Project
// COSC 1030
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string residency;
    char roomBoard;
    double tuition, roomAndBoard, totalBill;

    //Enter residency status
    cout << "Enter the residency status (in-state or out-of-state): ";
    getline(cin, residency);

    // Convert to lowercase for consistency
    for (char &c : residency) c = tolower (c);
    cout << "Residency entered: " << residency << endl;

    // Determine tuition and room & board costs
    if (residency == "in-state" || residency == "instate") {
        tuition = 3000;
        roomAndBoard = 2500;
    } else if (residency == "out-of-state" || residency == "outstate" || residency == "outofstate") {
        tuition = 4500;
        roomAndBoard = 3500;
    } else {
        cout<< "Invalid residency status. Please enter 'in-state' or 'out-of-state'." <<endl;
        return 1;
    }

    // Enter room and board
    cout << "Do your require room and board? (Y/N): ";
    cin >> roomBoard;
    roomBoard = tolower(roomBoard);
    
    //Validate and calulate the total cost
    if (roomBoard == 'y') {
        totalBill = tuition + roomAndBoard;
    } else if (roomBoard == 'n') {
        totalBill = tuition;
    } else{
        cout << "Invalid input for room and board. Please enter 'Y' or 'N'. " << endl;
        return 1;
      }

      //Output total bill
      cout << "Your total cost for the semester is $" <<totalBill << endl;

      return 0;
}
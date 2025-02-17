//
// Name: Terry Allee
// Date: February 15th
// University of Guiness Programming Project
// COSC 1030
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string residency;
    char roomBoard;
    double tuition, roomAndBoard, totalBill;

    //Enter residency status
    cout << "Enter the residency status (in-state or out-of-state): ";
    cin >> residency;

    // Convert to lowercase for consistency
    for (char &c : residency) c = tolower (c);

    // Determine tuition and room & board costs
    if 
}
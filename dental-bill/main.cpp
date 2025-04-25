//
// Name: Terry Allee
// Date: April 25, 2025
// Dental Bill Programming Project
// COSC 1030
//


#include <iostream>
#include <iomanip>

using namespace std;

// Overlooked function for the dental plan members
double calculateBill(double serviceCharge, double testFees) {
    return serviceCharge + testFees;
}

// Overloaded function for non-members 
double  calculateBill(double serviceCharge, double testFees,double medicineCharge) {
    return serviceCharge + testFees + medicineCharge;
}

int main() {
    char isMember;
    double serviceCharge, testFees, medicineCharge;

    cout << "Welcome to your friendly dental billing assistant! \n";
    cout << "Are you a member of the dental plan? (Y/N): ";
    cin >> isMember;

    cout << fixed << setprecision(2);

    cout << "Enter the service charge for your procedure: $";
    cin >> serviceCharge;

    cout << "Enter the test fees: $";
    cin >> testFees;

    double totalBill;

    if (isMember == 'Y' || isMember == 'Y') {
        totalBill = calculateBill(serviceCharge, testFees);
    } else {
        cout << "Enter the medicine charge: $";
        cin >> medicineCharge;
        totalBill = calculateBill(serviceCharge, testFees, medicineCharge);
    }

    cout << "\nYour total dental bill will be: $" <<totalBill << endl;
    cout << "Thank you for visiting! Keep smiling!\n";

    return 0;
}
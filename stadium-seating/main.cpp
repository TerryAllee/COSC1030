//
// Name: Terry Allee
// Date: February 9th, 2025
// Stadium Seating Programming Project
// COSC 1030
//


#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{ 
    // Constants for ticket prices
    const double CLASS_A_PRICE = 15.0;
    const double CLASS_B_PRICE = 12.0;
    const double CLASS_C_PRICE = 9.0;

    //Variables 
    int classATickets;  // Number of Class A tickets sold
    int classBTickets;  // Number of Class B tickets sold
    int classCTickets;  // Number of Class C tickets sold
    double total;       // Revenue from tickets sold

    // Read to number of class A tickets sold.
    cout << "Enter the number of Class A tickets sold: ";
    cin >> classATickets;
    
    cout << "Enter the number of Class B tickets sold: ";
    cin >> classBTickets;
   
    cout << "Enter the number of Class C tickets sold: ";
    cin >> classCTickets;
    
    // Calculate the total revenue
    total = (classATickets * CLASS_A_PRICE) + (classBTickets * CLASS_B_PRICE) + (classCTickets * CLASS_C_PRICE);

    // Display total revenue
    cout << "Total revenue generated from ticket sales: $" << total << endl;

    return 0;
    
}
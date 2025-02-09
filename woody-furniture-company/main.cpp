//
// Name: Terry Allee
// Date: February 9th 
// Woody Furniture Company Programming Project
// COSC 1030
//


#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    // Constants for the chair prices
    const double AMERICAN_COLONIAL_PRICE = 85.00;
    const double MODERN_PRICE = 57.50;
    const double FRENCH_CLASSICAL_PRICE = 127.75;

    // Variable for number of chairs sold
    int americanColonialSold, modernSold, frenchClassicalSold;

    // User input
    cout << "Enter the number of American Colonial chairs sold: ";
    cin >> americanColonialSold;

    cout << "Enter the number of Modern chairs sold: ";
    cin >> modernSold;

    cout << "Enter the number of French Classical chairs sold: ";
    cin >> frenchClassicalSold;

    // Calculate total sales
    double americanColonialTotal = americanColonialSold * AMERICAN_COLONIAL_PRICE;
    double modernTotal = modernSold * MODERN_PRICE;
    double frenchClassicalTotal = frenchClassicalSold * FRENCH_CLASSICAL_PRICE;
    double totalSales = americanColonialTotal + modernTotal + frenchClassicalTotal;

    // Results for output
    cout << fixed << setprecision(2); // Set output to 2 decimal places
    cout << "\nSales Summary: \n";
    cout << "American Colonial: $" << americanColonialTotal << endl;
    cout << "Modern: $" << modernTotal << endl;
    cout << "French Classical: $" << frenchClassicalTotal <<endl;
    cout << "Total Sales: $" << totalSales << endl;

    return 0;

}
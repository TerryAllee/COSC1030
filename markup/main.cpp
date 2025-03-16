//
// Name: Terry Allee
// Date: March 16th, 2025
// Markup Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

//Prototype
double calculateRetail (double, double);

int main()
{
    double wholesale; //Wholesale cost
    double markupPercent; // Markup percetage
    double retail; // Retail price

    // Get the item's wholesale cost.
    cout << "Enter the item's wholesale cost: ";
    cin >> wholesale;

    // Validate the wholesale cost.
    while (wholesale < 0)
    {
        cout << "Enter a non-negative value: ";
        cin >> wholesale;
    }

    // Get the item's markup percentage.
    cout << "Enter the item's markup percentage: ";
    cin >> markupPercent;

    // Validate the markup percentage.
    while (markupPercent < 0)
    {
        cout << "Enter a non-negative value: ";
        cin >> markupPercent;
    }

    // Get the items new retail price.
    retail = calculateRetail(wholesale, markupPercent);

    // Display the retail price
    cout << "The retail price is $" <<setprecision(2)
        <<fixed << retail << endl;

    return 0;
}

// Function definition
double calculateRetail(double wholesale, double markupPercent) {
    return wholesale * (1 + markupPercent / 100);
}

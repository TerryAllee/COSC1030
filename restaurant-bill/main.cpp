//
// Name: Terry Allee
// Date: February 2nd
// Restaurant Bill Programming Project
// COSC 1030
//
#include <iostream>
#include < iomanip>

<<<<<<< HEAD
using namespace std;

=======
#include <iostream>

using namespace std;

>>>>>>> ec17422cef6fa8672733628217079295e17a256f
// Variable declarations


<<<<<<< HEAD
int main() {}
    // Constants for the tax rate and tip percentage
    const double TAX_RATE = 0.0675; // 6.75% tax rate
    const double TIP_RATE = .20; // 20% tip 
    
    // Get the amount of the purchase.
    double mealCost = 88.67; //Cost of the meal
=======
int main() {
    // Constants for the tax rate and tip percentage
    const double TAX_RATE = 0.0675; // 6.75% tax rate
    const double TIP_RATE = .20; // 20% tip 
    
    // Get the amount of the purchase.
    double mealCost = 88.67; //Cost of the meal
>>>>>>> ec17422cef6fa8672733628217079295e17a256f


    // Calculate the sales tax.
    double taxAmount = mealCost * TAX_RATE; 

    // Calculate the tip.
    double tipAmount = mealCost * TIP_RATE;

    // Calculate the total of the sale.
    double totalBill = mealCost + taxAmount + tipAmount;

<<<<<<< HEAD
    // Print information about the sale.
    cout << fixed << setprecision(2);
    cout << "Meal Cost: $" << mealCost << endl;
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Tip Amount: $" << tipAmount << endl;
    cout << "Total Bill: $" << totalBill << endl;


    return 0 ;
}

=======
    // Print information about the sale
    cout << "Meal Cost: $" << mealCost << endl;
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Tip Amount: $" << tipAmount << endl;
    cout << "Total Bill: $" << totalBill << endl;


    return 0 ;

}
>>>>>>> ec17422cef6fa8672733628217079295e17a256f
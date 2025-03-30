//
// Name
// Date
// Chips and Salsa Programming Project
// COSC 1030
//

#include <iostream>
#include <string>
using namespace std;

 int main() {
    // assign arrays for the salsa names and sales
    string salsaNames[] = { "Mild" , "Medium" , "Sweet" , "Hot" , "Zesty"};
    int jarsSold[5];
    int totalSales = 0;
    int highestSalesIndex = 0;
    int lowestSalesIndex = 0;

    //Request user to enter the number of jars sold for each salsa type
    for (int i = 0; i < 5; i++) {
        cout << "Enter the number of salsa jars sold for " << salsaNames[i] << " salsa:  ";
        cin >> jarsSold[i];
        totalSales += jarsSold[i]; //Updates the total sales
    }

    // Determine the highest and lowest flavors of salsa
    for (int i = 1; i < 5; i++) {
        if (jarsSold[i] > jarsSold[highestSalesIndex]) {
            highestSalesIndex = i; // Updates the highest selling salsa
        }
        if (jarsSold[i] < jarsSold[lowestSalesIndex]) {
            lowestSalesIndex = i; // Updats the lowest selling salsa
        }
    
    }
    //show sales report
    cout << "\nSales Report: \n";
    cout << "------------------------------\n";
    for (int i = 0; i < 5; i++) {
        cout << salsaNames[i] << "  salsa:  "  << jarsSold[i] << "   jars sold\n";
    }

    cout << "------------------------------\n";
    cout << "Total sales:  " << totalSales << "  jars\n";
    cout << "Highest selling salsa:  " << jarsSold[highestSalesIndex] << " jars\n";
    cout << "Lowest selling salsa:   "  << jarsSold[lowestSalesIndex] << " jars\n";


 }
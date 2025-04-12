//
// Name: Terry Allee
// Date: April 12th
// Monthly Sales Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

//This function will add up all the sales and give us the total for the year
double calculateTotal(double* sales, int size) {
    double total = 0.0;
    for (int i = 0; i < size; ++i) {
        total += sales[i];
    }
    return total;
}

// This function will calculate the average monthly sales
double calculateAverage(double* sales, int size) {
    double total = calculateTotal(sales, size);
    return total / size;
}

int main() {
    int months;

    // Have the user enter how many months of sales that need to be entered
    cout << "Enter the number of months: ";
    cin >> months;

    // Create an array that uses dynamic memory to store sales data 
    double* sales = new double[months];

    // Have user enter the sales for each month
    for (int i = 0; i < months; ++i) {
        cout << "Enter the sales for each month " << (i + 1) << ": ";
        cin >> sales [i];
    }

    // Call the function to get the total of the sales
    double totalSales = calculateTotal(sales, months);

    // Call another function to calculate the average sales per month 
    double averageSales = calculateAverage(sales, months);

    // Display the total and average sales correctly
    cout << "Total yearly sales: $" << totalSales << endl;
    cout << "Average monthly sales: $" << averageSales <<endl;

    // Clean the memory that is used
    delete[] sales;

    return 0;   
}
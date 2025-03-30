//
// Name: Terry Allee
// Date: March 30
// Temperatures
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

// Using the array type typedef
typedef double TempArray[50];

// Create a function to calculate the average temp
double calculateAverage(TempArray temps, int numTemps) {
    double sum = 0;
    for (int i = 0; i < numTemps; ++i) {
        sum += temps[i];
    }
    return sum / numTemps;
}

// Create a function to find the highest temperature
double findHighest(TempArray temps, int numTemps) {
    double highest = temps[0];
    for (int i =1; i < numTemps; ++i) {
        if (temps[i] > highest) {
            highest = temps[i];
        }
    }
    return highest;
}

// Create a function to find teh lowest temperature
double findLowest (TempArray temps, int numTemps) {
    double lowest = temps[0];
    for (int i = 1; i < numTemps; ++i) {
        if (temps [i] < lowest) {
            lowest = temps[i];
        }
    }
    return lowest;

}

int main() {
    int numTemps;

    // Enter the number of tempertures
    cout << "Enter the number of temperatures to be read (max 50): ";
    cin >> numTemps;

    // Ensure inputs are correct
    if (numTemps < 1 || numTemps > 50) {
        cout << "Invalid number of temperatures. Please enter a number between 1 and 50." <<endl;
        return 1;
    }

    TempArray temps;

    // Enter the tempertures
        cout << " Enter the temperatures:  " << endl;
    for (int i = 0; i < numTemps; ++i) {
    cout << "Temperature " << i + 1 << ": ";
    cin >> temps[i];
}

    // Calculate and show the results
    double average = calculateAverage(temps, numTemps);
    double highest = findHighest(temps, numTemps);
    double lowest = findLowest(temps, numTemps);

    cout << fixed << setprecision(2); // sets the average with 2 decimal places
    cout << "Average temperature: " << average << "°C" << endl;
    cout << "Highest temperature: " << highest << "°C" << endl;
    cout << "Lowest temperature : " << lowest << "°C" << endl;

    return 0;

}
//
// Name: Terry Allee
// Date: Feburary 2, 2025
// Ocean Levels Programming Project
// COSC 1030
//

#include <iostream>

using namespace std;

int main() {

    // the Ocean level rises 1.5 millimeters per year
    double risePerYear = 1.5;

    // Lets calculate the ocean rising in 5, 7, and 10 years
    double riseIn5Years = risePerYear * 5;
    double riseIn7Years = risePerYear * 7;
    double riseIn10Years = risePerYear * 10;

    // Display results
    cout << "The ocean level will be:" << endl;
    cout << riseIn5Years << " millimeters higher in 5 years." << endl;
    cout << riseIn7Years << " millimeters higher in 7 years." << endl;
    cout << riseIn10Years << " millimeters higher in 10 years." << endl;

    return 0;

}

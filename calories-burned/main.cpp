//
// Name: Terry Allee    
// Date: Feb 23, 2025
// Calories Burned Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main ()
{
    // Constant for calories burned per minute
    const double CALS_BURNED_PER_MINUTE = 3.0;

    // Number of minutes
    int minutes;

    // Calories burned
    double calories;

    for (minutes = 10; minutes <= 30; minutes += 5)
    {
        calories = minutes * CALS_BURNED_PER_MINUTE;
        cout << "After " << minutes << " minutes you burned "
            << calories << "calories. \n";
    }
    return 0;

}
//
// Name: Terry Allee
// Date: February 15th
// Time Calculator Programming Project
// COSC 1030
//

# include <iostream>

using namespace std;

int main () {
    // Constants for the time conversion
    const int SECONDS_IN_MINUTE = 60;
    const int SECONDS_IN_HOUR = 3600;
    const int SECONDS_IN_DAY = 86400;

    //User input
    int totalSeconds;
    cout << "Enter the number of seconds: ";
    cin >> totalSeconds;

    // Calculating days, hours, minutes, with the remaining seconds
    int days = totalSeconds / SECONDS_IN_DAY;
    int remainingSeconds = totalSeconds % SECONDS_IN_DAY;

    int hours = remainingSeconds / SECONDS_IN_HOUR;
    remainingSeconds %= SECONDS_IN_HOUR;

    int minutes = remainingSeconds / SECONDS_IN_MINUTE;
    remainingSeconds %= SECONDS_IN_MINUTE;

    // Display the output
    cout << totalSeconds << " Seconds is approximately: \n ";
    if (days > 0) cout << days << " day(s)\n";
    if (hours > 0) cout << hours << " hour(s)\n";
    if (minutes > 0) cout << minutes << " minute(s)\n";
    if (remainingSeconds > 0) cout << remainingSeconds << " seconds(s)\n";

    return 0;
}
//
// Name Terry Allee
// Date March 2, 2025
// Hotel Occupancy Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int floors, rooms, occupied, totalRooms = 0, totalOccupied = 0;

    // Enter the number of floors that the hotel has and validate the input
    cout << "Enter the number of floors in the hotel: " ;
    cin >> floors;

    while (floors < 1) {
        cout << "Invalid input. There must be at least 1 floor. Try again: ";
        cin >> floors;
    }

    // Loop through each floor
    for (int i = 1; i <= floors; i++) {
        // Skip the 13th floor
        if (i == 13) {
            cout << "Skip the 13th floor. \n";
            continue;
        }

        // Enter the number of rooms and validate the input
        cout << "Enter the number of rooms on each floor " << i << ": ";
        cin >> rooms;

        while (rooms < 1) {
            cout << "Invalid input. Their must be at least 1 room and each floor. Reenter number of rooms on the floor: ";
            cin >> rooms;
        }
        // Enter the number of occupied rooms and validate the input
        cout << "Enter the number of occupied rooms on floor " << i << ": ";
        cin >> occupied;

        while (occupied < 0 || occupied > rooms) {
            cout << "Invalid input. The number of occupied rooms must be between 0 and " <<rooms << "Please reenter:";
            cin >> occupied;
        }
            //Update the totals
            totalRooms += rooms;
            totalOccupied += occupied;
    }

    // Calculate unoccupied rooms and occupancy rate
    int totalUnoccupied = totalRooms - totalOccupied;
    double occupancyRate = (static_cast<double>(totalOccupied) / totalRooms) * 100;

    // Display  the results
    cout << "\nHotel Occupancy Report" << endl;
    cout << "--------------------" << endl;
    cout << "Total rooms: " << totalRooms <<endl;
    cout << "Total occupied rooms: " << totalOccupied <<endl;
    cout << "Total unoccupied rooms: " << totalUnoccupied <<endl;
    cout << fixed << setprecision(2);
    cout << "Occupancy rate: " << occupancyRate << "%" <<endl;

    return 0;
}

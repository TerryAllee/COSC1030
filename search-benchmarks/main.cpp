//
// Name: Terry Allee
// Date: April 2, 2025
// Search Benchmarks Programming Project
// COSC 1030
//

#include <iostream>
#include <algorithm> // to sort ()

using namespace std;

// Create a linear search function
int linearSearch(const int arr[], int size, int value, int &comparisons) {
    comparisons = 0;
    for (int i = 0; i < size; i++) {
        comparisons++;
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;

}
//Perform binary serach. Array must be sorted
int binarySearch(const int arr[], int size, int value, int &comparisons) {
    int low = 0, high = size -1;
    comparisons = 0;

    while (low <= high) {
        comparisons++;
        int mid = (low + high) / 2;

        if (arr[mid] == value) {
            return mid;

        } else if (arr[mid] < value) {
            low = mid + 1;

        } else {
            high = mid - 1;
        }
    }
    return -1;
}
int main () {
    const int SIZE = 20;
    int numbers[SIZE] = {19, 32, 67, 64, 96, 14, 20, 7, 6, 10,
                         24, 4, 2, 8, 18, 11, 64, 63, 47, 27};

    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    int linearComparisons = 0, binaryComparisons = 0;

    // Implement Linear Search
    int linearIndex = linearSearch(numbers, SIZE, target, linearComparisons);

    // Sort the array for the Binary Search
    int sortedArray[SIZE];
    copy(begin(numbers), end(numbers), begin(sortedArray));
    sort(sortedArray, sortedArray + SIZE);

    // Implement Binary Search
    int binaryIndex = binarySearch (sortedArray, SIZE, target, binaryComparisons);

    // Results
    cout << "\n --- Search Results ---\n";
    if (linearIndex != -1) {
        cout << "Linear Search: Found at index " << linearIndex
            << " with " << linearComparisons << " comparisons.\n";
    } else {
        cout << "Linear Search: Value is not found after " << linearComparisons << " comparisons.\n";

    }

    if (binaryIndex != -1) {
        cout << "Binary Search: Found at index " << binaryIndex
             << " (in sorted array) with " << binaryComparisons << " comparisons. \n";
    } else {
        cout << "Binary Search: Value is not found after " << binaryComparisons << " comparisons.\n";
    }
    return 0;
}
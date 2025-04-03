//
// Name: Terry Allee
// Date: April 4th
// Integer Array
// COSC 1030
//

#include <iostream>
using namespace std;

const int MAX_SIZE = 50;

// Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i =0; i < size -1; i++) {
        for(int j = 0; j < size - i -1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Exchange elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Binary search function
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else 
            right = mid -1;
    }

    return -1; // if not found
}

// calculate mean function
double calculateMean(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return static_cast<double>(total) /size;
}

int main() {
    int arr[MAX_SIZE] , size, target;

    //Enter the number of elements
    cout << "Enter the number of elements (max 50):  ";
    cin >> size;
    if (size < 1 || size > MAX_SIZE) {
        cout << "Invalid size." << endl;
        return 1;
    }

    // Enter the elements
    cout << "Enter " << size << " integer : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    // Show the original array
    cout << "\nOriginal array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "";
    }
    
    cout << endl;

    // Sort the array
    bubbleSort(arr, size);

    // Show the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr [i] << "  ";
    }
    cout << endl;

    // Search the target number
    cout << "Enter integer to search for: ";
    cin >> target;

    int index = binarySearch(arr, size, target);

    // Show the search result
    if (index != -1)
        cout << "Number " << target << " found at index " << index << " in the sorted array. " << endl;
    else 
        cout << "Number " << target << " not found in the array. " << endl;
    
    // Calculate and show the mean
    double mean = calculateMean(arr, size);
    cout << "Mean of the array is: " << mean << endl;

    return 0;

}
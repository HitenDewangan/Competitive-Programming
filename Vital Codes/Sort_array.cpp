#include <iostream>
#include <algorithm>  // for std::sort
using namespace std;

int main() {
    int n;
    
    // Input size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input elements of the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Input element to add
    int newElement;
    cout << "Enter the element to add: ";
    cin >> newElement;

    // Add the new element to the array
    arr[n] = newElement;
    n++;

    // Sort the array
    sort(arr, arr + n);

    // Print the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}

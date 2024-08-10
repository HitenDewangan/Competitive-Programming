#include <iostream>

using namespace std;

int findUniqueNumber(int arr[], int n) {
  int result = 0;

  // XOR all elements in the array. The unique element will not cancel out.
  for (int i = 0; i < n; ++i) {
    result ^= arr[i];
  }

  return result;
}

int main() {
  int arr[] = {4, 1, 5, 1, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  int unique = findUniqueNumber(arr, n);

  cout << "The unique number is: " << unique << endl;

  return 0;
}

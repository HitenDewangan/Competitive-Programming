  #include <iostream>
  #include <vector>
  using namespace std;
  
  // Modified firstOccurence function with separate update
  int firstOccurence(vector<int>& arr, int n, int target) {
    int low = 0, high = n - 1;
    int lb = -1; // Initialize lb to -1 outside the loop

    while (low <= high) {
      int mid = low + (high - low) / 2;

      if (arr[mid] == target) { // Check for equality in mid
        lb = mid; // Update lb only if target is found
        high = mid - 1; // Continue searching in the left half
      } else if (arr[mid] > target) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }

    return lb;
  }

  // Modified lastOccurence function with separate update
  int lastOccurence(vector<int>& arr, int n, int target) {
    int low = 0, high = n - 1;
    int ub = -1; // Initialize ub to n outside the loop

    while (low <= high) {
      int mid = low + (high - low) / 2;

      if (arr[mid] == target) { // Check for equality in mid
        ub = mid; // Update ub only if target is found
        low = mid + 1; // Continue searching in the right half
      } else if (arr[mid] > target) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }

    return ub; // Return ub as the last occurrence index
  }

// =======================================================================================================
int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int target;
  cin >> target;
  cout << firstOccurence(arr, n, target) << " " << lastOccurence(arr, n, target);
}
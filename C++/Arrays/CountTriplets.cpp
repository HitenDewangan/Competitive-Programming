#include<iostream>
using namespace std;

int countTriplets(int arr[], int n, int sum)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        int l = i + 1;
        int r = n - 1;
        while (l < r) {
            if (arr[i] + arr[l] + arr[r] == sum) {
                count++;
                l++;
                r--;
            }
            else if (arr[i] + arr[l] + arr[r] < sum) {
                l++;
            }
            else {
                r--;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    cout << countTriplets(arr, n, sum);
}
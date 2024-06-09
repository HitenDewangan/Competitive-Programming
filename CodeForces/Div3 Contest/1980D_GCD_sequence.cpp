#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }

  return gcd(b, a % b);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    
    int prev_gcd = gcd(arr[0], arr[1]);
    int first_gcd;
    first_gcd = prev_gcd;     // checking for conditions like [100,50,2,10,20] where gcd in max
    int curr_gcd;
    int count = 0;      // no. of elements to delete

    vector<int> gcd_arr;
    gcd_arr.push_back(prev_gcd);   // pushing gcd in vector

    int check=0;
    int j, next;
    for (int i = 1; i < n-1; i++) {
        if(count > 1) break;

        if(check == 1){
            curr_gcd = gcd(arr[j], arr[next]);
        }
        else curr_gcd = gcd(arr[i], arr[i+1]);

        if(curr_gcd < prev_gcd){
            if(check == 0){
                count++;
                j = i;
                next = i+2;
                check = 1;
            }
            else{
                next = i+1;
                count++;
            }
            
        }
        else{
            check = 0;
        }

      prev_gcd = max(prev_gcd, curr_gcd);     // max of prev_gcd and curr_gcd;
      // cout << prev_gcd << endl;

      if(prev_gcd != first_gcd){
          gcd_arr.push_back(prev_gcd);
      }

    }

    // if(gcd_arr.size() == 1){
    //     cout << "YES" << endl;
    //     continue;
    // }

    int max_el = gcd_arr[0];
    for(int i = 0; i < gcd_arr.size()-1; i++){
        max_el = max(gcd_arr[i], gcd_arr[i+1]);
    }

  // cout << max_el << endl;
    if(max_el == first_gcd && is_sorted(gcd_arr.begin(), gcd_arr.end()) && (gcd_arr.size() > 1 && count > 1)){
        cout<<"YES"<<endl;
        continue;
    }

    if(gcd(arr[j-1], arr[j+1]) == first_gcd){
      cout<<"YES"<<endl;
      continue;
    }

    if(count == 1 || count == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
  }
}


//Status : Not Done
.
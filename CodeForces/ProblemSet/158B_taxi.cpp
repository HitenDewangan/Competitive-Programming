#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, s;
    vector<int> count(5, 0); // Use a vector for dynamic size and initialization

    cin >> n;
    while (n--) {
        cin >> s;
        count[s]++;
    }

    int total = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];

    if (count[2] % 2 == 1) {
        total++;
        count[1] -= 2;
    }

    if (count[1] > 0) {
        total += (count[1] + 3) / 4;
    }

    cout << total << endl;
    return 0;
}




// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
    
//     unordered_map<int, int> mp(n);
    
//     for(int i=0; i<n; i++){
//         int x;
//         cin>>x;
//         mp[x]++;
//     }
    
//     int taxi= 0;
    
//     // for(int i : v){
//     //     if(v[i] == 4) taxi++;
//     //     else{
//     //         int comp = 4-v[i];
//     //         if(mp.count(comp)){
//     //             mp[comp]--;
//     //         }
//     //         mp[v[i]]--;
//     //         taxi++;
//     //     }
//     // }

//     taxi += mp[4];
//     mp.erase(4);
    
//     while(!mp.empty()){
//         for(auto it : mp){  
//             // if(it.first == 4){
//             //     taxi++;  // when exactly 4
//             // }
//             if(mp.size() == 1){  // when size is 1
//                 taxi++;
//             }
//             // else if(mp.size() == 1 || mp.size() == 2){
//             //     if(mp.size() == 1){
//             //         taxi++;
//             //     }
//             //     else{   // when size is 2
//             //         int sum = 0;
//             //         while(!mp.empty()){
//             //             auto it2 = mp.begin();
//             //             sum += it2->first;
//             //             it2->second--;
//             //         }

//             //         sum <= 4 ? taxi++ : taxi += 2;
//             //     }
//             // }
//             else{ 
//                 int comp = 4-it.first;
//                 if((mp.count(comp) && comp != it.first) || (mp.count(comp) && mp[comp] > 1)){
//                     mp[comp]--;
//                 }
//                 mp[it.first]--;
//                 taxi++;
//             }
//         }
//     }
    
//     cout<<taxi<<'\n';
    
//     return 0;
// }


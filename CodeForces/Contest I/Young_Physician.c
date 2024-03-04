#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum_x = 0, sum_y = 0, sum_z = 0;

    for (int i = 0; i < n; ++i) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        sum_x += x ;
        sum_y += y ;
        sum_z += z ;
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
//=============================Below CODE is written by myself================================
// #include<stdio.h>
// int main(){
//     int n,st;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=0; j<3; j++){
//             scanf("%d",&st);
//             sum+=st;
//         }
//         arr[i] = sum;
//     }
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
//     int sum1 = 0;
//     for(int i=0; i<n; i++){
//         sum1 += arr[i];
//     }
//     sum1==0?printf("YES"):printf("NO");
//     return 0;
// }
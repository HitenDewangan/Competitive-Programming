// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int a[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    double res = sum/(double)n;
    printf("%.12f",res);
    return 0;
}
#include<stdio.h>
int fact(int n){
    int res;
    if(n==1 || n==0){
        return 1;
    }
    return res = n*fact(n-1);
    
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial is: %d",fact(n));
}
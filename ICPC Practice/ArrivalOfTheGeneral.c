#include<stdio.h>

int main() {
    int n, max, min;
    scanf("%d", &n);
    int a[n];
    //to get the heights of soldiers
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];
    //to get the max and min heights
    int pmin = 0, pmax = -1;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            pmax = i;
        }
        if (a[i] <= min) {
            min = a[i];
            pmin = i;
        }
    }

    //to get the indexes of max and min in the array of heights
    
    // for (int i = 0; i < n; i++) {
    //     if (a[i] == max) {
    //         pmax = i;
    //     }
    //     if (a[i] == min) {
    //         pmin = i;
    //     }
    // }

    printf("%d %d\n", pmax, pmin);

    int sct = 0, ect = 0;
    while (pmax != 0) {
        pmax--;
        sct++;
    }

    while (pmin != n-1) {
        pmin++;
        ect++;
    }

    printf("%d %d\n", sct, ect);
    //to get the total time
    int res = sct + ect - 1;
    printf("%d\n", res);

    return 0;
}

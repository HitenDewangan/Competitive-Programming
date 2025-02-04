#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;

    // If both points are in the same quadrant, no need to cross axes
    if ((x1 > 0 && x2 > 0 && y1 > 0 && y2 > 0) || // first quadrant
        (x1 < 0 && x2 < 0 && y1 > 0 && y2 > 0) || // second quadrant
        (x1 < 0 && x2 < 0 && y1 < 0 && y2 < 0) || // third quadrant
        (x1 > 0 && x2 > 0 && y1 < 0 && y2 < 0)) { // fourth quadrant
        cout << 0 << endl;
        return 0;
    }

    // we find the quadrant of the two points by multiplying the signs of x and y
    int quad = x1*x2*y1*y2;
    int cordMv = 0;
    if(quad < 0){  // means the points are in adjacent quadrants
        cordMv = min(abs(abs(x1) - abs(x2)), abs(abs(y1) - abs(y2)));

    } else{ // means the points are in the cross quadrants
        cordMv += abs(x1) > abs(y1) ? abs(x1) : abs(y1);
        cordMv += abs(x2) > abs(y2) ? abs(x2) : abs(y2);
    }
    cout << cordMv << endl;
}
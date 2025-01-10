#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, m, a;
    cin >> n >> m >> a;

    long long ans = ceil((double)n/a) * ceil((double)m/a);
    cout << ans << endl;
}
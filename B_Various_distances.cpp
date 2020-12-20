#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0;
    for(int i = 0; i<n; i++){
        int x,y;
        cin >> x;
        y = abs(x);
        a+=y;
        b+=(y*y);
        c = max(y,c);
    }
    cout << a << endl;
    double p = sqrt(b);
    cout << std::setprecision(20) << p << endl;
    cout << c;
    return 0;
}
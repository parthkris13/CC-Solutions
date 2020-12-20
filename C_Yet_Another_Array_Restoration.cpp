#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n, x, y, d, c = 0;
        cin >> n >> x >> y;
        for (int i = y - x; i && y - x <= i * (n - 1); i--) if ((y - x) % i == 0) d = i;
        for (int i = x; i <= y; i += d, c++) cout << i << ' ';
        for (int i = x - d; i > 0 && c < n; i -= d, c++) cout << i << ' ';
        for (int i = y + d; c < n; i += d, c++) cout << i << ' ';
        cout << endl;
    }
    return 0;
}


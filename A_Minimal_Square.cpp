#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);
        int c = max(2 * a, b);
        cout << c * c << endl;
    }
    return 0;
}
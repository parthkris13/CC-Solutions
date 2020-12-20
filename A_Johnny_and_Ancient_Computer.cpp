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
        int a,b;
        cin >> a >> b;
        if (a < b) swap(a, b);
        if (a % b) cout << -1;
        else{
            a /= b;
            if (a & (a - 1)) cout << -1;
            else cout << (std::__lg(a) + 2) / 3;
        }
        cout << endl;
    }
    return 0;
}
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
        int x,y;
        cin >> x >> y;
        if(x==y) cout << x-1 << " " << x;
        else cout << x-1 << " " << y;
        cout << endl;
    }
    return 0;
}
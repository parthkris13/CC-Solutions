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
        int k, x, y;
        cin >> x >> y >> k;
        //cout << x << y << k << endl;;
        int ans = k;
        int p = k*(y+1) - 1;
        if(p%(x-1) == 0) ans += (p/(x-1));
        else ans += ((p/(x-1)) + 1);

        cout << ans << endl;
    }
    return 0;

}
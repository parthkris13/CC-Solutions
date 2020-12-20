#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, n;
        cin >> x >> y >> n;
        int p = n%x, ans=-1;
        if(p<y) ans = n - p + y - x;
        if(p>=y) ans = n - p + y;
        if(ans < 0) ans = 0;
        cout << ans << endl;
    }
    return 0;
}
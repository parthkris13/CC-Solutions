#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    t = 1;
    while(t--){
        int r,x,y;
        cin >> r >> x >> y;
        double p = sqrt(x*x + y*y);

        int ans = ceil(p/r);

        
        // if(p==0) ans = 0;
        // else if(p==r) ans = 1;
        // else if(p<r) ans = 2;
        // else{
        //     if(p%r == 0) ans = p/r;
        //     else{
        //         int dorime = p - p%r - r;
        //         ans = dorime/r + 2;
        //     }
        // }
        

        cout << ans << endl;
        

    }
    return 0;
}


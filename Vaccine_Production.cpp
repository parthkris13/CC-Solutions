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
        int d1,d2,v1,v2,p;
        cin >> d1 >> v1 >> d2 >> v2 >> p;
        int parth = 0;
        int ans = 0;
        while(parth<p){
            ans++;
            if(ans>=d1) parth+=v1;
            if(ans>=d2) parth+=v2;
        }
        
        
        cout << ans << endl;
    }
    return 0;
}
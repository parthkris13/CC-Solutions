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
        int n;
        cin >> n;
        int ans = 0;
        int val = 0;
        for(int i = 1; i<=n; i++){
            val+=i;
            ans++;
            if(val>=n) break;
        }
        if(val==n+1) ans++;

        
        cout << ans << endl;
    }
    return 0;
}
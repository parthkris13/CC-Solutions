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
        for(int i = 0; i<n; i++){
            int x,y;
            cin >> x >>y;
        }
        
        int dp[100005];
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = 0;
        for(int i = 3; i<=n; i++) dp[i] = i+dp[i/2];
        //for(int i = 3; i<=n; i++) cout << dp[i] << " ";
        //cout << endl;
        
        cout << dp[n] << endl;
        
        //else cout << "IMPOSSIBLE" << endl;
        
    }
    return 0;
}


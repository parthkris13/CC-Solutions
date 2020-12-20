#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
int32_t main(){
    IOS;
    int n, W;
    cin >> n >> W;
    int w, h;
    vector <int> dp(n+1, INT_MAX);
    dp[0] = 0; 
    int cont[n][2];
    for(int i=0; i<n; i++){
        cin >> w >> h;
        cont[i][0] = w;
        cont[i][1] = h;
    }
    for(int i=1; i<=n; i++){
        w = cont[i-1][0];
        h = cont[i-1][1];
        dp[i] = dp[i-1] + h;
        for(int p = i-1; p>0; p--){
            w += cont[p-1][0];
            h = max(h, cont[p-1][1]);
            if(w>W) break;
            dp[i] = min(dp[i], dp[p-1]+h);
        }
    }
    cout << dp[n] << endl;
    return 0;
}


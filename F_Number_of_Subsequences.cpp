#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int mod = 1e9 + 7;
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int dp[n][4]={0};
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++){
            int x = s[i - 1] - 'a';
            if (s[i - 1] == '?')
                for (int j = 0; j <= 3; j++)
                    dp[i][j] = (dp[i - 1][j] * 3 + (j ? dp[i - 1][j - 1] : 0)) % mod;
            else{
                for (int j = 0; j <= 3; j++) dp[i][j] = dp[i - 1][j];
                dp[i][x + 1] = (dp[i][x + 1] + dp[i][x]) % mod;
            }
        }
        cout << dp[n][3]<<endl;
    }
    return 0;
}
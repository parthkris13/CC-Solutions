#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9+7;
int tenpow[111111];
int cumul[111111];
int parth(int x) {
    return (x*(x+1))/2;
}
int32_t main(){
    IOS;
    int t;
    //cin >> t;
    t=1;
    while(t--){
        string S;
        cin >> S;
        int n = S.size();
        tenpow[0]=1;
        for(int i=1;i<=n;i++) tenpow[i]=tenpow[i-1]*10%mod;
        cumul[0]=0;
        for(int i=1;i<=n;i++) {
            cumul[i] = cumul[i-1]+ i*tenpow[i-1];
            cumul[i]%=mod;
        }
        int ans = 0;
        for(int i=0;i<S.size();i++){
            int pos = S.size()-1-i;
            int d = S[i]-'0';
            int curr = tenpow[pos]*parth(i)%mod;
            curr += cumul[pos];
            curr %= mod;
            ans += d*curr%mod;
            ans %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}
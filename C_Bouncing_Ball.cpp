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
        int n,p,k;
        cin >> n >> p >> k;
        string s;
        cin >> s;
        int x,y;
        cin >> x >> y;
        int ans = INT_MAX;
        int suff[n]={0};
        int pref[n]={0};
        int freq[k]={0};
        for ( int i = n-1; i>=0; i-- ){
            suff[i] = freq[i%k] + (s[i] == '0');
            freq[i%k]+=(s[i]=='0');
        }
        memset(freq,0,sizeof(freq));
        for ( int i = p-1; i<n; i++ ){
            int temp = 0;
            temp = i-p+1;
            temp*=y;
            ans = min(ans,temp + suff[i]*x);
        }
        cout << ans << endl;
    }
    return 0;
}
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
        int n,k;
        cin >> n >> k;
        string s;
        cin >>s;
        int one=0, zero=0;
        for(int i =0; i<n; i++){
            if(s[i] == '0') zero++;
            else one++;
        }
        int p = n/k;
        if(one%p == 0 && zero%p == 0){
            string ans;
            int z = zero/p;
            int o = one/p;
            while(z--) ans+='0';
            while(o--) ans+='1';
            string pks = ans;
            string chronos = ans;
            reverse(chronos.begin(),chronos.end());
            int r = 1;
            while(ans.size()<n){
                if(r) ans+=chronos;
                else ans+=pks;
                if(r) r = 0;
                else r = 1;
            }
            cout << ans << endl;
        }
        else cout << "IMPOSSIBLE" << endl;
        
    }
    return 0;
}


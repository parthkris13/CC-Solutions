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
        set<int> pks;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            pks.insert(x);
        }
        int sz = pks.size();
        int ans = 1;
            int parth = k;
            while(parth < sz){
                k--;
                parth+=k;
                ans++;
                if(k==0 && parth < sz){
                    ans = -1;
                    break;
                }
            }
            cout << ans << endl;
    }
    return 0;
}
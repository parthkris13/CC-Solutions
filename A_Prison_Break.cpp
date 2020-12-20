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
        int n,m,r,c;
        cin >> n >> m >> r >> c;
        int ans = 0;
        ans = max({abs(1-r)+abs(1-c),abs(n-r)+abs(1-c),abs(n-r)+abs(m-c),abs(1-r)+abs(m-c)});
        
        
        cout << ans << endl;
    }
    return 0;
}
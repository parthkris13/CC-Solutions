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
        int n,x;
        cin >> n >> x;
        if(n <=2 ){
            cout << 1 << endl;
            continue;
        }
        n -= 2;
        int ans = 1;
        if(n%x == 0) ans += n/x;
        else ans += (n/x) + 1;
        cout << ans << endl;

        
        
    }
    return 0;
}
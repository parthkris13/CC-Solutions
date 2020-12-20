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
        int a,b;
        cin >> a >> b;
        int odd1,odd2,even1,even2;
        int ans = 0;
        even1 = a/2;
        odd1 = a - even1;
        even2 = b/2;
        odd2 = b - even2;
        ans += (odd1*odd2);
        ans += (even2*even1);  
        
        cout << ans << endl;
    }
    return 0;
}
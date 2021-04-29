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
        int ans = 1010101010;
		for(int i = 0; i < 100; i++) {
			int aa = a, bb = b + i;
			if(bb == 1) continue;
			int cnt = i;
			while(aa) { cnt++; aa /= bb; }
			ans = min(ans, cnt);
		}
        
        cout << ans << endl;
    }
    return 0;
}
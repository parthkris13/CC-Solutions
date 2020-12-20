#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    t = 1;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
	    set<int> pref;
	    int cur_pref = 0;
	    pref.insert(cur_pref);
	    while (n--) {
            int a; 
            cin >> a;
            cur_pref += a;
            if (pref.count(cur_pref)) {
                ans++;
                pref = set<int>({cur_pref - a});
            }
            pref.insert(cur_pref);
        }
        cout << ans << endl;
    }
    return 0;
}
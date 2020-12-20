#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int N = 4020;
int n;
bitset<N> dp;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        cin>>n;
        for (int i = 0; i <= n; i++)dp[i] = 0;
	    dp[0] = 1;
	    int mx = 0;
	    int x;
	    int len = 0;
	    for (int i = 0; i < 2 * n; i++) {
            cin >> x;
		    if (x > mx){
			    dp |= dp << len;
			    mx = x;
			    len = 1;
		    } 
            else len++;
	    }
	dp |= dp << len;
    if(dp[n]) cout << "YES" << endl;
    else cout << "NO" << endl;
    } 
    return 0;
}
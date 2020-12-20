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
        int n;
        cin >> n;
        int arr[n];
        for(int i=1; i<=n; i++) cin >> arr[i];
        int ans = 0;
		for(int i = 1; i <= n; i++){
			if(arr[i] == i) continue;
			int j = i;
			while(j + 1 <= n && j + 1 != arr[j + 1]) j++;
			i = j;
			ans++;
		}
		ans = min(ans, 2LL);
		cout << ans << endl;
    }
    return 0;
}


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
        map<int, int> f;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			f[arr[i] % 2]++;
		}
		int ans = 1;
		for(auto &it:f) ans &= (it.second % 2 == 0);
		if(ans) cout << "YES" << endl;
		else{
			sort(arr, arr + n);
			for(int i = 0; i < n-1 ; i++) ans |= (arr[i + 1] - arr[i] == 1);
			if(ans) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
    }
    return 0;
}
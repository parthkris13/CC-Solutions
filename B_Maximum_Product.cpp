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
        int arr[n] = {0};
        for(int &x : arr) cin >> x;
        sort(arr,arr+n);
        int ans = 0;
        int maxi = arr[n-1];
        if(maxi<0){
		    cout << arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5] << endl;
		    continue;
		}
        sort(arr,arr+n,[](int x,int y){return abs(x)>abs(y);});
		ans = arr[0]*arr[1]*arr[2]*arr[3]*arr[4];
        //cout << ans << endl;
		for(int i=5; i<n; i++){
		    for(int j=0; j<5; j++){
		        int p = arr[i];
		        for(int k = 0; k < 5; k++) if(k!=j) p *= arr[k];
		        ans = max(ans,p);
		    }
		}
        cout << ans << endl;
    }
    return 0;
}


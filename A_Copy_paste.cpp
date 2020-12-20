#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int &x : arr) cin >> x;
        sort(arr,arr+n);
        int p = arr[0];
        int ans = 0;
        for(int i = 1; i<n; i++) ans += (k-arr[i])/p;
        cout << ans << endl;
    }
    return 0;
}


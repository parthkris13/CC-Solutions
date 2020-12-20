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
        int count[n+1]={0};
        for(int i = 0; i<n; i++) count[arr[i]]++;
	    for(int p = 0; count[p]>=2; p++, ans++);
	    for(int p=0; count[p]>=1; p++, ans++);
        cout << ans << endl;
    }
    return 0;
}


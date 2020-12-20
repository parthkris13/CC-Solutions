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
        for(int i=0; i<n; i++) cin >> arr[i];
        int p = 0;
        sort(arr,arr+n);
        int q = arr[n-1];
        int ans = 0;
        for(int i=1; i<n; i++) p+=(q-arr[i]);
        if(arr[0] > p){
            int r = arr[0] - p;
            if(r%(n-1)!=0) ans = (n-1-(r%(n-1)));
        }
        else ans = p - arr[0];


        cout << ans << endl;
    }
    return 0;
}
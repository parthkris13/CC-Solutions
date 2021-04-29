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
        int n,m;
        cin >> n >>m;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        int cost[m];
        for(int i=0; i<m; i++) cin >> cost[i];
        int ans = 0;
        int pks = 0;
        sort(arr,arr+n, greater<int>());
        for(int i = 0;i < n; i++){
            if(cost[arr[i]-1]>=cost[pks] && pks < m) ans+=cost[pks++];
            else ans+=cost[arr[i]-1];
        }
        
        cout << ans << endl;
    }
    return 0;
}
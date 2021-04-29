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
        int ans = INT32_MIN;
        for(int i=0; i<n; i++) cin >> arr[i];
        int pks[n]={0};
        for(int i = 0;i < n; i++) pks[i] = arr[i];
        for(int i = n-1;i>=0; i--){
            if(pks[i]+i<n) pks[i]+=pks[pks[i]+i];
        }
        for(int i = 0;i < n; i++) ans = max(pks[i],ans);
        cout << ans;
        cout << endl;
    }
    return 0;
}
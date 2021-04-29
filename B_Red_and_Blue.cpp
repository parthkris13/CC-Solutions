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
        int arr[n+1];
        arr[0]=0;
        for(int i=1; i<n+1; i++) cin >> arr[i];
        int m;
        cin >> m;
        int brr[m+1];
        brr[0] = 0;
        for(int i=1; i<m+1; i++) cin >> brr[i];
        for(int i=1; i<n+1; i++) arr[i]+=arr[i-1];
        for(int i=1; i<m+1; i++) brr[i]+=brr[i-1];
        int ans = 0;
        for(int i = 0; i<n+1; i++) for(int j = 0; j<m+1; j++) ans = max(ans,arr[i]+brr[j]);
        cout << ans << endl;
    }
    return 0;
}
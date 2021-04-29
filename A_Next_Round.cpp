#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int k;
        cin >> k;
        for(int i=0; i<n; i++) cin >> arr[i];
        int p = arr[k-1];
        int ans=0;
        for(int i=0; i<n; i++) if(arr[i]>=p && arr[i]>0) ans++;
        
        cout << ans << endl;
    }
    return 0;
}
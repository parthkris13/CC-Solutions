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
        int ans = 0,mi,ma;
        for(int i = 0; i < n-1; i++){
            mi = min(arr[i],arr[i+1]);
            ma = max(arr[i],arr[i+1]);
            if(ma > 2*mi){
                int pks = mi;
                while(ma > 2*pks){
                    ans++;
                    pks = pks*2;
                }
            }
            
        }
        
        cout << ans << "\n";

      
    }
    return 0;
}
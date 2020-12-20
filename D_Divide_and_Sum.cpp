#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod =  998244353;
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        int arr[2*n];
        for(int i=0; i<2*n; i++) cin >> arr[i];
        //for(int i=0; i<2*n; i++) cout << arr[i];

        sort(arr,arr+2*n);
        int ans = 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j < 2*n; j++){
                ans+=(2*abs(arr[i]-arr[j]));
                ans %= mod;
                cout << ans << endl;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
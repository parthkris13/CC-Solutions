#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
int32_t main(){
    IOS;
    int n;
    cin >> n;
    int arr[n];
    for(int &x : arr) cin >> x;
    sort(arr,arr+n);
    int count[n+1] = {};
    int ans = 1;
    for(int i=0; i<n; i++) count[arr[i]]++;
   // for(int i=0; i<n; i++) cout << count[i] << endl;
    if(count[0] > 1) cout << 0 << endl;
    else {
        for(int i=1; i<n+1; i++){
            if(count[i] == 2) ans *= 2, ans = ans % mod;
            else if(count[i] == 0) continue;
            else{
                cout <<  0 << endl;
                return 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}


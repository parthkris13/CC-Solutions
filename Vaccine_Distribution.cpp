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
        int n,d;
        cin >> n >> d;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        int risk = 0;
        for(int i = 0; i<n; i++) if(arr[i] >= 80 || arr[i]<=9) risk++;
        int ans = (risk/d);
        if(risk%d != 0) ans++;
        int p = n - risk;
        ans += p/d;
        if(p%d != 0) ans++;


        cout << ans<< endl;
    }
    return 0;
}
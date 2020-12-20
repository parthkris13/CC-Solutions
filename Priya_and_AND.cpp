#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int ans=0;
        for(int &x : arr) cin >> x;
        for(int i = 0; i<n-1; i++) for(int j = i+1; j<n; j++) if((arr[i] & arr[j]) == arr[i]) ans++;
        cout << ans << endl;


    }
    return 0;    
}


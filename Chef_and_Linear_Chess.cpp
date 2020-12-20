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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int &x : arr) cin >> x;
        sort(arr,arr+n);
        int ans = -1;
        for(int i = n-1; i>=0; i--){
            if( k % arr[i]== 0){
                ans = arr[i];
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
    
}


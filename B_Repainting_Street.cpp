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
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i<n; i++) cin >> arr[i];
        int ans = INT_MAX;
        for(int i = 1; i<=100; i++ ){
            int p = 0;
            for(int j = 0; j<n;){
                if(arr[j] == i) j++;
                else{
                    p++;
                    j+=k;
                }

            }
            ans = min(ans,p);
        }
        
        
        cout << ans << endl;
    }
    return 0;
}
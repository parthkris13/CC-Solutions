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
        int mini = INT_MAX;
        for(int i = 0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
        if(n==1)cout << 0 << endl;
        else{
            for(int i = n-2;i >= 0;i--){
                if(k==0) break;
                else{
                    if(arr[i]>0){
                        arr[n-1]+=arr[i];
                        arr[i]=0;
                        k--;
                    }
                    else k--;
                }
            }
            for(int i = 0;i < n; i++) mini = min(mini, arr[i]);
            int ans = arr[n-1]-mini;
            cout << ans << endl;
        }
   
    }
    return 0;
}
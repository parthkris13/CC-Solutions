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
        int n,k;
        cin >> n >> k;
        int arr[n];
        int flag =0;
        int ans[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            arr[i]*=2;
            if(arr[i]>k) ans[i] = 1;
            else if(arr[i]<k) ans[i] = 0;
            else{
                ans[i] = flag;
                flag^=1;
            }
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}


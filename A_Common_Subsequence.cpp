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
        int n,m;
        cin >> n >> m;
        int arr[n],brr[m];
        int flag = 0;
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i=0; i<m; i++) cin >> brr[i];
       // sort(arr,arr+n);
       // sort(brr,brr+n);
        int ans = 0;
        for(int i = 0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i] == brr[j]){
                    ans = arr[i];
                    break;
                }
              
            }  
             if(ans>0) break;
        }
        if(ans>0) cout << "YES" << endl << "1" << " " << ans << endl;
        else cout << "NO" << endl;

    }
    return 0;
}


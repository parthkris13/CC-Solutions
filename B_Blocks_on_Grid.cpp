#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n,m;
        cin >> n >> m;
        int arr[n][m];
        int mini = INT32_MAX;
        for(int i=0; i<n; i++) for(int j = 0; j<m; j++){
            cin >> arr[i][j];
            mini = min(mini,arr[i][j]);
        }
        // sort(arr,arr+n*m);
        // int p = arr[(n*m)-1];
        // cout << arr[(n*m)-1] << endl;
        int ans=0;
        for(int i=0; i<n; i++) for(int j=0; j<m; j++)ans+=(arr[i][j]-mini);
        cout << ans;



        
        cout << endl;
    }
    return 0;
}
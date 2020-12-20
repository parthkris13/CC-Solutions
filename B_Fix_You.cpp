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
        int n,m;
        cin >> n >> m;
        char arr[n][m];
        int ans=0;
        for(int i = 0; i<n; i++) for(int j=0; j<m; j++) cin >> arr[i][j];
        for(int i =0; i<m-1; i++) if(arr[n-1][i] != 'R') ans ++;
        for(int i=0; i<n-1; i++) if(arr[i][m-1] != 'D') ans++;
        cout << ans << endl;
         

        

    }
    return 0;
    
}


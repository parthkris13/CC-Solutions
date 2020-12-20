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
        int arr[n][m];
        for(int i=0; i<n; i++) for(int j = 0; j<m; j++) cin >> arr[i][j];
        int ans = 0;
        for(int i=0; i<n/2; i++) for(int j = 0; j<m/2; j++){
            int a,b,c,d;

            a = abs(arr[i][j] - arr[n-i-1][j]) + abs(arr[i][j] - arr[i][m-j-1]) + abs(arr[i][j]-arr[n-i-1][m-j-1]);
            b = abs(arr[i][j] - arr[i][m-j-1]) + abs(arr[n-i-1][j] - arr[i][m-j-1]) + abs(arr[i][m-j-1]-arr[n-i-1][m-j-1]);
            c = abs(arr[i][j] - arr[n-i-1][j]) + abs(arr[n-i-1][j] - arr[i][m-j-1]) + abs(arr[n-i-1][j] - arr[n-i-1][m-j-1]);
            d = abs(arr[i][j] - arr[n-i-1][m-j-1]) + abs(arr[n-i-1][m-j-1] - arr[i][m-j-1]) + abs(arr[n-i-1][j] - arr[n-i-1][m-j-1]);
            ans+=min({a,b,c,d});   
        }
        if(n%2!=0){
            for(int j = 0; j<m/2; j++){
                ans+=abs(arr[n/2][j]-arr[n/2][m-j-1]);
            }
        }
        if(m%2!=0){
            for(int i = 0; i<n/2; i++){
                ans+=abs(arr[i][m/2]-arr[n-i-1][m/2]);
            }
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}
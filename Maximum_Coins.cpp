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
    int z = t;
    while(t--){
        int n;
        cin >> n;
        int arr[n][n];
        for(int i = 0; i<n; i++) for(int j=0; j<n; j++) cin >> arr[i][j];
        int ans = 0;
        for(int i=0; i<n; i++){
            int p = 0;
            int k = i;
            int j = 0;
            while(k<n) p+=arr[j++][k++];
            //cout << p << endl;
            ans = max(p,ans);
        }
        for(int j = 1; j<n; j++){
            int p = 0;
            int k = j;
            int i = 0;
            while(k<n) p+=arr[k++][i++];
            ans = max(p,ans);
        }
        
        cout << "Case #" << (z-t) <<": " << ans << endl;
    }
    return 0;
}
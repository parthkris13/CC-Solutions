#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n,c; 
    cin>>n>>c;
    int arr[n], brr[n];
    for(int i=0; i<n-1; i++) cin>>arr[i];
    for(int i=0; i<n-1; i++) cin>>brr[i];
    int dp[n][2];
    dp[0][0] = 0;
    dp[0][1] = c;
    for(int i=1; i<n; i++){
        dp[i][0] = arr[i - 1] + min(dp[i - 1][0], dp[i - 1][1]);
        dp[i][1] = brr[i - 1] + min(dp[i - 1][0] + c, dp[i - 1][1]);
    }
    for(int i=0; i<n; i++) cout << min(dp[i][0], dp[i][1]) << " ";
    
    return 0;
}


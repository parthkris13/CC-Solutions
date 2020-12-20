#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n; 
    cin>>n;
    int arr[n];
    for(int &x:arr) cin>>x;
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = abs(arr[1] - arr[0]);
    for(int i = 3; i<=n; i++) dp[i] = min((dp[i-1] + abs(arr[i-1] - arr[i-2])), dp[i-2] + abs(arr[i-1] - arr[i-3]));
    cout << dp[n] << endl; 
    return 0;
}


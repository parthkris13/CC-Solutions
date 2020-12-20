#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n,k; 
    cin>>n>>k;
    int arr[n];
    for(int &x:arr) cin>>x;
    int dp[n];
	int i=0;
	while(i<=k&&i<n){
		dp[i] = abs(arr[i] - arr[0]);
		i++;
	}
	while(i<n){
		int ans = dp[i-1]+abs(arr[i]-arr[i-1]);
		for(int j=2;j<=k;j++) ans = min(ans, dp[i-j]+abs(arr[i] - arr[i-j]));
		dp[i] = ans;
		i++;
	}
	cout << dp[n-1];
     
    return 0;
}


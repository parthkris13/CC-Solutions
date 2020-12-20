#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
    int max=0,cnt=0;
    for(int i=0;i<n-1;i++){
    	if(arr[i+1]<=arr[i]*2) cnt++;
        else cnt=0;
    	if(cnt > max) max=cnt;
    }
    cout<<max+1;
    return 0;
}


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
    sort(arr,arr+n);
    int min = arr[0], max = arr[n-1];
    int ans = 0;
    for(int i=0;i<n;i++) if(arr[i] != min && arr[i] != max) ans++;
    cout << ans << endl;
    

    return 0;
}


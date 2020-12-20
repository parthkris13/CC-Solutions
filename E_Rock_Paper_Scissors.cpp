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
        int n;
        cin >> n;
        int arr[3]={0}, brr[3]={0};
        for(int i=0; i<3; i++) cin >> arr[i];
        for(int i=0; i<3; i++) cin >> brr[i];   
        int p = 0;
	    cout << max({p, arr[0] + brr[1] - n, arr[1] + brr[2] - n, arr[2] + brr[0] - n}) << ' ';
        cout << min(arr[0], brr[1]) + min(arr[1], brr[2]) + min(arr[2], brr[0]) << endl;
    }
    return 0;
}
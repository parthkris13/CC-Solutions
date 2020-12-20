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
        int n;
        cin >> n;
        int arr[n];
        for(int &x : arr) cin >> x;
        int sum = arr[0] + arr[1];
        if(arr[n-1] >= sum) cout << 1 << " " << 2 << " " << n << endl;
        else cout << -1 << endl;

        

    }
    return 0;    
}


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
        int n;
        cin >> n;
        int arr[n] = {0};
        for(int &x : arr) cin >> x;
        for(int i = n-1; i>=0; i--) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}


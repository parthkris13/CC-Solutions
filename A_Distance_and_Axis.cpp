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
        int n,k;
        cin >> n >> k;
        if(k==0) {
            if(n&1) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(k==n) cout << 0 << endl;
        else if (k<n) cout << (abs(n-k)%2) << endl;
        else cout << k-n << endl;
        
    }
    return 0;
}


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
        int l,r;
        cin >> l >>r;
        if(2*l <= r)  cout << l << " " << 2*l << endl;
        else cout << -1 << " " << -1 << endl;
    }    
    return 0;
}


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>  n;
        if(n%4 == 0 && n >=4) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
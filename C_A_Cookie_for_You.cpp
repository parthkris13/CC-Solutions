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
        int a,b,n,m;
        cin >> a >> b >> n >>m;
        if(min(a,b) >= m && (a+b) >= (n+m)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n,x,t;
    cin >> n >> x >>t;
    if(n%x==0) cout << (n/x)*t << endl;
    else cout << ((n/x)+1)*t << endl;
    return 0;
}


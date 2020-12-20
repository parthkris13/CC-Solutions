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
        int n,x,m;
        cin >> n >> x >> m;
        int a = x, b = x;
        int l,r;
        while(m--){
            cin >> l >> r;
            if(l <= b && a <= r){
                a = min(a,l);
                b = max(b,r);
            }
        }
		cout << b - a + 1 << endl;
    }
    return 0;
}


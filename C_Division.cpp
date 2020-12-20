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
        int p,q;
        cin >> p >> q;
        if(p<q) cout << p << endl;
        else if(p==q) cout << p/2 << endl;
        for(int i = p, j = 1; i>=0; )
    }
    return 0;
}
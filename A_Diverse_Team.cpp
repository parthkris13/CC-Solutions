#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n, i, k, d;
    cin >> n >> k;
    map<int, int> m;
    for(i = 0; i < n; ++i) cin >> d, m[d] = i+1;
    if(m.size() < k) return cout << "NO", 0;
    cout << "YES" << endl;
    for(auto [it, f] : m) if(k-- > 0) cout << f << ' ';
    return 0;
}


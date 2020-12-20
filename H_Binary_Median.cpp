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
        int n, m;
        cin >> n >> m;
        vector<long long> t(n);
        long long cnt = (1ll << m) - n;
        long long k = (cnt - 1) / 2;
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            for (int j = 0; j < m; ++j)
                t[i] = 2 * t[i] + s[j] - '0';
        }
        sort(t.begin(), t.end());
        long long ans = -1;
        long long last = 0;
        for (int i = 0; i < n; ++i) {
            if (k < t[i] - last) {
                ans = last + k;
                break;
            }
            k -= t[i] - last;
            last = t[i] + 1;
        }
        if (ans == -1) ans = last + k;
        for (int i = m - 1; i >= 0; --i) cout << (ans >> i & 1);
        
        cout << endl;
    }
    return 0;
}
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
        vector<int> a(n),b(n),tm(n);
        for(int i = 0;i < n;i++) cin >> a[i] >> b[i];
        for(int i = 0;i < n;i++) cin >> tm[i];
        int cur = tm[0] + a[0];
        for(int i = 0;i < n - 1;i++) {
            int nx = max(b[i], cur + (b[i] - a[i] + 1) / 2);
            cur = nx + tm[i + 1] + a[i + 1] - b[i];
        }
        cout << cur << endl;;
        

    }
    return 0;
}


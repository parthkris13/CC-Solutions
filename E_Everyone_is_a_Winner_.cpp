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
        int n;
        cin >> n;
        set<int> s;
        for(int i = 1; i * i <= n; i++)        {
            int val = n / i;
            s.insert(val);
            val = n / val;
            s.insert(val);
        }
        cout << s.size() + 1 << endl;
        cout << 0 << " ";
        for(auto it: s) cout << it << " ";
        cout << endl;
    }
    return 0;    
}


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
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        if (is_sorted(a.begin(), a.end(), greater<>()) && unique(a.begin(), a.end()) == a.end()) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}
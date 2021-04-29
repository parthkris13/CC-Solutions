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
        string s;
        cin >> s;
        int pks = 0;
        for(int i = 0; i<n; i++) if(s[i] == '0') pks++;
        if(pks>30) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
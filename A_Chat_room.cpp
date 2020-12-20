#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    string s;
    cin >> s;
    string p = "hello";
    int j =0;
    for(int i =0; i<s.size(); i++) if(s[i] == p[j])j++;
    if(j==5) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}


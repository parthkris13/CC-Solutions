#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    string s;
    cin >> s;
    int n = s.size();
    if(s[n-1] == 's'){
        s+='e';
        s+='s';
        cout << s << endl;
    }
    else {
        s+='s';
        cout << s << endl;
    }
    return 0;

}
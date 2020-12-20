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
    int ans = 8;
    if(s[0] == 'a' || s[1] == 'h') ans -= 3;
    if(s[1] == 1 || s[1] == 8) ans -=3;
    if(ans==2) ans = 3;
    cout << ans << endl;
    return 0;
}


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int INF = 1 << 30;
const int MAX_N = 100000 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
#define db long double
#define x first
#define y second
#define mp make_pair
#define pb push_back
#define all(a) a.begin(), a.end()
int32_t main(){
    IOS;
    string s;
    cin >> s;
    int ans = 0;
    int count = 0;
    for(int i=0; i<s.size();i++ ){
        if(s[i] == 'R') count++;
        else count = 0;
        if(count > ans) ans = count;
    }
    cout << ans << endl;
    return 0;
}


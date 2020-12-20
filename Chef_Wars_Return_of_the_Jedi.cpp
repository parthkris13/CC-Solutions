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
    int t;
    cin >> t;
    while(t--){
        int h, p;
        cin >> h >> p;
        while(p>0 && h>0){
            h -= p;
            p /= 2;
        }
        if(h<=0) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}


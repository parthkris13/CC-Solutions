#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const long long MOD = 1e9;
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
        int n;
        cin >> n;
        if(n==1) cout << 1 << endl;
        else if(n==2) cout << 2 << endl; 
        else cout << (n/2) + 1 << endl;
    }
    return 0;
}


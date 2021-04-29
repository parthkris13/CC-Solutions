#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int binexpo(int a, int b){
    int res = 1;
    while(b>0){
        if(b&1) res = res*a;
        a = a*a;
        b>>=1;
    }
    return res;
}
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        int m;
        cin >> m;
    
         
        if (n > 30) cout << m;
        else cout << m % (1LL << n);
    }
    return 0;
}
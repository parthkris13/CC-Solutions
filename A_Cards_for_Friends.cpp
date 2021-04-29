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
        int n,w,h;
        cin >> w >> h >> n;
        int ans = 1;
        while(w%2==0){
            w/=2;
            ans*=2;
        }
        while(h%2==0){
            h/=2;
            ans*=2;
        }
        
        if(ans>=n) cout << "YES"<< endl;
        else cout << "NO"<< endl;
    }
    return 0;
}
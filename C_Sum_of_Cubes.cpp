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
        int p = cbrt(n);
        int q = 1;
        int flag = 0;
        //cout << p <<  endl;
        while(p>=q){
            int dorime = pow(p,3) + pow(q,3);
            if(dorime<n) q++;
            else if(dorime > n) p--;
            else{
                flag = 1;
                break;
            }
        }
        
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
int fact(int n){
    int factorial = 1;
    for(int i = 1; i <=n; ++i)
    {
        factorial = (factorial*i)%mod;
    }
    return factorial%mod;
}
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n,x,pos,ans=1;
        cin >> n >> x >> pos;
        int pks = n-x, par = x-1, left = 0, right = n,mid=0;
        while(right >= left){
            mid = (left+right)/2;
            if(mid==pos) break;
            else if(mid>pos){
                ans = (pks*ans)%mod;
                right = mid;
                pks--;
            }
            else{
                ans = (par*ans)%mod;
                left = mid+1;
                par--;
            }
        }
        ans = (ans*fact(par+pks))%mod;
        cout << ans << endl;
    }
    return 0;
}
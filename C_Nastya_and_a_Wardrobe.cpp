#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
#define mod 1000000007
int fastexpo(int n,int k)
{
    n%=mod;
    if(k==0)
        return 1;
    return (fastexpo(n*n,k/2)*(k&1?n:1))%mod;
}
int32_t main(){
    IOS;
    int x,k;
    cin >> x >> k;
    if(x==0) cout<<0<<endl;
    else{
        x%=mod;
        int p = fastexpo(2,k+1);
        cout<< ((p*x)%mod+mod-fastexpo(2,k)+1)%mod;
    }
    return 0;
}


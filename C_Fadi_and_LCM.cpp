#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int lcm(int a,int b){
    return a / __gcd(a, b) * b;
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    int ans=1;
    for(int i=1;i*i<=t;i++){
        if(t%i==0 && lcm(i,t/i) == t) ans = i;
    }
    cout << ans << " " << t/ans << endl;
    return 0;
}


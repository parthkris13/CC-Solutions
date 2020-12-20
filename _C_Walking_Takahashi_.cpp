#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int x, k, d;
    cin >> x >> k >> d;
    x = abs(x);
    int p = x/d;
    if(k <= p){
        cout << x - k*d << endl;
        return 0;
    } 
    x -= p*d;
    if((k-p)&1) cout << abs(x-d) << endl;
    else cout << x << endl;
    
    return 0;
    
       
}


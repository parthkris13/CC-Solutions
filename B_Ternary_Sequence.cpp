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
        int a,b,c;
        int d,e,f;
        cin >> a >> b >> c;
        cin >> d >> e >> f;
        int ans=0;
        if(c > 0){
            int p = min(c,e);
            ans += 2*p;
            c-=p;
            e-=p;

        }
        
        
        if(c>0){
            int p = min(c,f);
            c-=p;
            f-=p;
        }
        if(c>0){
            int p = min(c, d);
            c-=p;
            d-=p;
        }
        //cout << ans << endl;
        if(b > 0){
            int p = min(b,e);
            b-=p;
            e-=p;
        }
        if(b>0){
            int p = min(b,d);
            b-=p;
            c-=p;
        }
        if(b > 0){
            ans -= 2*b;
            f-=b;
            b=0;
        }
        cout << ans << endl;
        
    }
    return 0;
}


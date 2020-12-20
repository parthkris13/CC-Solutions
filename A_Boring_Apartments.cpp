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
        int ans = 0;
        int p = n%10;
        ans+=(p-1)*10;
        //cout << ans << endl;
        if(n==p) ans+=1;
        else if(n>10*p && n<100*p) ans+=3;
        else if(n>100*p && n<1000*p) ans+=6;
        else ans+=10;
        cout << ans;


        
        
        
        cout << endl;
    }
    return 0;
}
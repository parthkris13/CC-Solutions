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
        int n,m,x,y;
        cin >> n >> m >> x >> y;
        int temp;
        int flag = 1;
        if(x > y){
            x = y;
            flag = 0;
        }
        int d = y-x; 
        if(x < d && flag==1){
            cout << x*n*m << endl;
            continue;
        } 
        int ans = 0;
        if(n==1 && m ==1) ans = x;
        else if(n&1  == 1 && m&1 == 1) ans = x*(((n*m)/2)+1) + d*((n*m)/2);
        else ans = y*((n*m)/2);
        cout << ans << endl;
    }
    return 0;
}


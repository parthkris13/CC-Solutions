#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int l,r,m;
        cin >> l >> r >> m;
        int diff = r-l;
        int flag = 0;
        int i;
        for(i = l;i<=r; i++){
            if(m%i == 0) {
                flag = 1;
                break;
            }
            if((i - m%i) <= diff){
                flag = 2;
                break;
            }
            if(m%i <= diff){
                flag = 3;
                break;
            }
        }
        // cout << flag << endl;
        if(flag ==1) cout << i << " " << l << " " << l << endl;
        if(flag == 2) cout << i << " " << l << " " << l + (i-m%i) << endl;
        if(flag == 3) cout << i << " " << l + m%i << " " << l << endl;
    }
    return 0;
}


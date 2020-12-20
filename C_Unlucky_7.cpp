#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        int flag = 1;
        int pks =0;
        for(int i = 1;i <= n; i++){
            pks = i;
            flag = 1;
            while(pks>0){
                if(pks%10==7) flag = 0;
                if(flag==0) break;
                pks/= 10;
            }
            pks = i;
            if(flag){
                while(pks>0){
                    if(pks%8==7) flag = 0;
                    if(!flag) break;
                    pks/=8;
                }
            }
            if(flag) ans++;
        }
        cout << ans<< endl;
    }
    return 0;
}
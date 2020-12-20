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
        int a=0,b=0,c=0;
        int a1,a2,a3;
        int flag = 1;
        int flag2 = 0;
        int p = 1000/3;
        int q = 1000/5;
        int r = 1000/7;
        if(n%15==0){
            cout << n/15 << " " << n/15 << " " << n/15 <<  endl;
            continue;
        }
        for(int i = 0; i<1000; i++){
            int dd = i;
        }
        for(int i = 0;i <= p; i++){
            for(int j = 0;j <= q; j++){
                for(int k = 0;k <= r; k++){
                    if(3*i+5*j+7*k==n){
                        flag2 = 1;
                        a = i;
                        b = j;
                        c = k;
                        flag = 0;
                        break;
                    }
                    else continue;

                }
                if(flag==0) break;
                else continue;
            }
            if(flag==0) break;
            else continue;
        }
        if(flag2) cout << a << " " << b << " " << c << endl;
        else cout << -1 << endl;
    }
    return 0;
}
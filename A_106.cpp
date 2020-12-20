#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    //cin >> t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        if(n<8 || n%2==1 || n%10==0) cout << -1;
        else{
            int flag = 0;
            int a, b;
            for(a = 1; a<=1000; a++){
                for(b = 1; b<=1000; b++){
                    if(pow(3,a) + pow(5,b) == n){
                        flag = 1;
                        break;
                    }
                }
                if(flag) break;
            }
            if(flag) cout << a << " " << b;
            else cout << -1;
        }
        
        cout << endl;
    }
    return 0;
}
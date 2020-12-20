#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int ansa = 0, ansb = 0;
        if(c/b < a && a >= c) {
            ansa = -1;
            ansb = b;
        }
        if(c/b < a && a < c){
            ansa = 1;
            ansb = b;
        }
        if(a == c/b){
            ansa = b-1;
            ansb = -1;
        }
        if(a < c/b){
            ansa = 1;
            ansb = -1;
        }
        cout << ansa << " " << ansb << endl;
    }
    return 0;
}
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
        int n;
        cin >> n;
        int x[4*n-1], y[4*n-1];
        for(int i=0; i<4*n-1;i++) cin >> x[i] >> y[i];
        sort(x,x+(4*n-1));
        sort(y,y+(4*n-1));
        int count = 1, ansx = 0, ansy=0,flag = 1;
        for(int i=1; i<4*n-1;i++){
            if(x[i] == x[i-1]) count++;
            else{
                if(count%2) {
                    ansx=x[i-1];
                    flag = 0;
                    break;
                }    
                else count = 1;
            }
        }
        if(flag && count%2) ansx = x[4*n-2];
        count = 1;
        flag = 1;
        for(int i=1; i<4*n-1;i++){
            if(y[i] == y[i-1]) count++;
            else{
                if(count%2) {
                    ansy=y[i-1];
                    break;
                }    
                else count = 1;
            }
        }
        if(flag && count%2) ansy = y[4*n-2];
        count = 1;
        flag = 1;
        cout << ansx << " " << ansy << endl;
    }
    return 0;
}


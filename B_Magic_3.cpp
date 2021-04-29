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
        int a,b,c;
        cin >> a >> b >> c;
        while(a--){
            int x,y;
            cin >> x >> y;
            if(x<b && y>c){
                cout << "Yes";
                return 0;
            }
            else continue;
        }
        
        cout << "No" << endl;
    }
    return 0;
}
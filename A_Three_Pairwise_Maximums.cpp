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
        int x,y,z;
        cin >> x >> y >> z;
        int a,b,c;
        if(x == y && x>=z){
            cout << "YES" << endl;
            cout << x << " " << z << " " << z << endl;
            continue;
        }
        if(z == y && z>=x){
            cout << "YES" << endl;
            cout << y << " " << x << " " << x << endl;
            continue;
        }
        if(z == x && z>=y){
            cout << "YES" << endl;
            cout << z << " " << y << " " << y << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}


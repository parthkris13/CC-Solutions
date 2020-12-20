#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int r,c;
        cin >> r >> c;
        if(r==1){
            cout << "U";
            for(int i = 0; i<c-1; i++) cout << "R";
        }
        else if(r==5){
            cout << "U";
            for(int i = 0; i<5; i++) cout << "R";
            cout << "U";
            for(int i = 0; i<4; i++) cout << "L";
            cout << "U";
            for(int i = 0; i<4; i++) cout << "R";
            cout << "U";
            for(int i = 0; i<4; i++) cout << "L";
            cout << "U";
            for(int i = 0; i<4; i++) cout << "R";


        }
    }
    return 0;
}
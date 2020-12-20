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
        int r,g,b,w;
        cin >> r >> g >> b >> w;
        w=w%2+r%2+g%2+b%2;
        cout << (w<2||w>2 && r*g*b ? "Yes ":"No ");
        cout << endl;
    }
    return 0;
}
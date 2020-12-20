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
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(y1==y2) cout << abs(x1-x2) << endl;
        else if(x1==x2) cout << abs(y1-y2) << endl;
        else cout << abs(y1-y2) + abs(x1-x2) + 2 << endl;
    }
    return 0;
}
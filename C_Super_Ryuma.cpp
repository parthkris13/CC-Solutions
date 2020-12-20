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
        int x1,y1,x2,y2;;
        int ans = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        if((x1 + y1) == (x2+y2)) ans = 1;
        else if((x1 - y1) == (x2 - y2)) ans = 1;
        else if(abs(x1 - x2) + abs(y1 - y2) <= 3) ans = 1;
        else{
            
        }
        
        
        cout << ans << endl;
    }
    return 0;
}
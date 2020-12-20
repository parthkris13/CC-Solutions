#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int x,y,a,b;
    cin >> x >> y >> a >> b;
    if(b<=x*(a-1)){
        if((y-x)%b == 0) cout << (y-x)/b-1 << endl;
        else cout << (y-x)/b << endl;
    }
    else{
        int p = 0;
        while(x*(a-1) < b){
            if(x*a <y){
                p++;
                x*=a;
                //cout << x << endl;
            }
            else break;
        }
        int pp;
        if((y-x)%b == 0) pp = (y-x)/b-1;
        else pp = (y-x)/b;
        if(b <= (y-x)) cout << p + pp << endl;
        else cout << p << endl;
    }
    return 0;
}
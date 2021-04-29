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
        int x,y,k,n;
        cin >> x >> y >> k >> n;
        if(abs(x-y)%(2*k)==0) cout << "Yes" << endl;
        else cout << "No" << endl;
        
    
    }
    return 0;
}
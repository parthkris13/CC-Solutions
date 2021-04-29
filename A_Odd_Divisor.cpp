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
        int n;
        cin >> n;
        if(n&1) cout << "Yes" << endl;
        else {
            int flag = 0;
            int p = n;
            while(p>0){
                p/=2;
                if(p&1 && p>1){
                    flag = 1;
                    break;
                }
            }
            if(flag==0) cout << "No" << endl;
            else cout << "Yes" << endl;
        }        
    }
    return 0;
}
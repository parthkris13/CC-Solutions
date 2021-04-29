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
        if(n==1) cout << "9";
        if(n>1){
            cout << "98";
            if(n>2){
                int pks = 9;
                for(int i = 3;i<n+1; i++){
                    cout << pks%10;
                    pks++;
                }
            }
        }
        
        
        cout << endl;
    }
    return 0;
}
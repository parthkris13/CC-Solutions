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
        int n,k;
        cin >> n >> k;
        int p = 1;
        for(int i = 1; i<=n; i++){
            if(p==1){
                cout << "a";
                p=2;
            }
            else if(p==2){
                cout << "b";
                p=3;
            }
            else if(p==3){
                cout << "c";
                p=1;
            }
        }
        cout << endl;
    }
    return 0;
}
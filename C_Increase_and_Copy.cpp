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
        int moves;
        int ans = INT_MAX;
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        if(n==2){
            cout << 1 << endl;
            continue;
        }
        if(n==3){
            cout << 2 << endl;
            continue;
        }
        for(int i = 2; i<n; i++){
            moves = (n/i) + (bool)(n%i) - 1 + (i - 1);
            if(moves <= ans) ans = moves;
            else{
                cout << ans << endl;
                break;
            }
        }
    }
    return 0;
}
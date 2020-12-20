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
        int x;
        for(int i=1; i<=n; i++){
            cin >> x;
            if(x%k == 0) cout << '1';
            else cout << '0';
        }
        cout << endl;
    }
    return 0;
}


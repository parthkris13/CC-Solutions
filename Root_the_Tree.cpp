#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int edges [n-1][2];
        int indeg[n] = {0};
        for(int i = 0; i<n-1; i++){
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            indeg[y]++;
        }
        int ans = 0;
        for(int i = 0; i<n; i++) if(indeg[i] > 0) ans+= (indeg[i] - 1);
        cout << ans << endl;

    }
    return 0;
}
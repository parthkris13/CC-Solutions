#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 1e5 + 5;
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int rating[n] = {0};
        int ans = 0;
        for(int i = 0; i<n; i++) cin >> rating[i];
        int max[n] = {0};
        int brating[n] = {0};
        int brank[n] = {0};
        for(int i = 0; i<n; i++) max[i] = rating[i];
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                int p;
                cin >> p;
                rating[j] += p;
                if()
            }

        }
    
    }
    return 0;
}


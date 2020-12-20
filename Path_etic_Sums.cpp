#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
vector<int> adj[100005];
int dist[100005];

void dfs(int s, int e) {
    dist[s] = dist[e]+1;
    for (auto u : adj[s]){
        if (u != e)dfs(u, s);
    }
}

int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i<=n; i++) adj[i].clear();
        for(int i = 0; i<=n; i++) dist[i] = 0;
        dist[0] = 0;
        for(int i = 1; i<n; i++){
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(1,0);
        // for(int i = 1; i<=n; i++) cout << dist[i] << " ";
        // cout << endl;
        for(int i = 1; i<=n; i++){
            if(dist[i]%2==1) cout << 1 << " ";
            else cout << 2 << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
vector<vector<int>> adj;
vector <int> c, h;
bool ok  = true;
void dfs(int u, int p){
    int sum = 0;
    for(auto v : adj[u]){
        if(v==p) continue;
        dfs(v,u);
        c[u] += c[v];
        sum += h[v];   
    }
    h[u] += c[u];
    if (h[u] % 2 != 0) ok = false;
    if (h[u] > 2 * c[u]) ok = false;
    if (h[u] < sum) ok = false;
}
int32_t main(){
    IOS;
    int t;
	cin >> t;
	while(t--){
		int n,m;
        cin >> n >> m;
        adj.resize(n);
        adj.clear();
        c.resize(n);
        c.clear();
        h.resize(n);
        h.clear();
        for(int i=0; i<n; i++) cin >> c[i];
        for(int i=0; i<n; i++) cin >> h[i];
        //cout <<"chronos";
        for(int i=0; i<n-1; i++){
            int u,v;
            cin >> u >> v;
            u--;
            v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(0,-1);
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
        ok = true;

	}
    
    return 0;
    
       
}


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 30;
const int MAX_N = 100000 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int V, E;
vector<vector<int>> adj;
vector<int> topo;
vector<int> visited;
void dfs(int u) { //applying DFS for topological sort
    visited[u] = 1;
    for (auto to : adj[u]) if(!visited[to]) dfs(to);
    topo.push_back(u);
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int p;
    cin >> V >> E;
    adj = vector<vector<int>>(V);
	vector<pair<int, int>> edges;
    for (int i = 0; i < E; i++) {
        int p, x, y;
        cin >> p >> x >> y;
        --x;
        --y;
        if(p) adj[x].push_back(y);
        edges.push_back({x, y});
    }
    topo.clear();
    visited = vector<int>(V);
    for (int i = 0; i < V; i++) if (!visited[i]) dfs(i);
    vector<int> pos(V);
    reverse(topo.begin(), topo.end());
    for(int i = 0; i < topo.size(); i++) pos[topo[i]] = i;
    bool bad = false;
    int x,y;
    for (int i = 0; i < V; ++i) for(auto j : adj[i]) if (pos[i] > pos[j]) bad = true;
    if(bad) cout << "NO" << endl;
    else{
		cout << "YES" << endl;
		for (auto [x, y] : edges){
			if (pos[x] < pos[y]) cout << x + 1 << " " << y + 1 << endl;
		    else cout << y + 1 << " " << x + 1 << endl;
		}
    }
    }
    return 0;
}
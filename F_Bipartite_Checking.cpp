#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int INF = 1 << 30;
const int MAX_N = 100000 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
int V, E;
vector<int> adj[MAX_N];

bool isBipartite() { //applying BFS and assigning colour to each node
    queue<int> Q; int colour[V];
    memset(colour, -1, sizeof colour);
    Q.push(0); colour[0] = 0;
    
    while(!Q.empty()) {
        int u = Q.front(); Q.pop();
        for(int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i];
            if(colour[v] == -1) {
                colour[v] = 1 - colour[u];
                Q.push(v);
            }
            else if(colour[v] == colour[u]) {
                return false;
            }
        }
    }
    return true;
}
int32_t main() {
    IOS;
    cin >> V >> E;
    for(int i = 0; i < E; i++) {
        int x, y; cin >> x >> y;
        if (std::find(adj[x].begin(), adj[x].end(), y) != adj[x].end()){
            vector<int>::iterator new_end;
            new_end = remove(adj[x].begin(), adj[x].end(), y);
            new_end = remove(adj[y].begin(), adj[y].end(), x);
        }
        else {
            adj[x].push_back(y); adj[y].push_back(x);
        }
        for(auto it : adj[x]) cout << x << " == " << it << " ";
        cout << endl;
        for(auto it : adj[y]) cout << y << " == " << it << " ";
        cout << endl;

        if(isBipartite) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
}
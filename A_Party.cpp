#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int n, ans;
int dfs(int node, int parent, int level, vector<int> adj[]){
    ans = max(ans, level);
    for(auto it : adj[node]) if(it != parent) dfs(it, node, level+1, adj);
}
int32_t main(){
    IOS;
    cin >> n;
    vector <int> adj[n+1];
    int x;
    for(int i = 1; i<=n; i++){
        cin >> x;
        if(x!=-1) adj[i].push_back(x);
    }
    ans = 0;
    for(int i = 1; i<=n; i++) dfs(i, -1, 1, adj);
    cout << ans << endl;
    return 0;
}


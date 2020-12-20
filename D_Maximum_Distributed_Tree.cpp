#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long mod = 1e9 + 7;
#define db long double
#define x first
#define y second
#define mp make_pair
#define pb push_back
#define all(a) a.begin(), a.end()
int dfs(int v, vector<vector<pair<int,int>>>& adj, vector<int>& cnt_nodes, int par){
    int i;
    int cnt = 0;
    for(i=0;i<adj[v].size();i++){
        int x = adj[v][i].first;
        int eid = adj[v][i].second;
        if(x == par) continue;
        int tmp = dfs(x, adj, cnt_nodes, v);
        cnt += tmp;
        cnt_nodes[eid] = tmp;
    }
    return cnt+1;
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
	    cin >> n;
	    vector<vector<pair<int,int>>> adj(n+1, vector<pair<int,int>> ());
	    int i;
	    for(i=0;i<n-1;i++){
	        int u,v;
	        cin >> u >> v;
	        adj[u].pb(mp(v, i));
	        adj[v].pb(mp(u, i));
	    }
	    vector<int> cnt_nodes(n+1);
	    dfs(1, adj, cnt_nodes, 0); 
	    for(i=0;i<n-1;i++) cnt_nodes[i] = (cnt_nodes[i] * (n - cnt_nodes[i]));   
	    sort(all(cnt_nodes));
	    reverse(all(cnt_nodes));
	    for(i=0;i<n-1;i++) cnt_nodes[i] %= mod;
	    int m;
	    cin >> m;
	    vector<int> p;
	    for(i=0;i<m;i++){
	        int val;
	        cin>>val;
	        p.pb(val);
	    }
	    sort(all(p));
	    reverse(all(p));
	    while(p.size() < n-1) p.pb(1);
	    int diff = p.size() - (n-1);
        //cout << diff << endl;
	    int idx = 0;
	    for(i=1; i<p.size(); i++){
	        if(i <= diff){
	            p[idx] *= p[i];
	            p[idx] %= mod;
	        }
	        else{
	            p[idx + 1] = p[i];
	            idx++;
	        }
	    }
	    int ans = 0;
	    for(i=0; i<n-1; i++){
	        ans += ((cnt_nodes[i]*p[i]) % mod);
	        ans %= mod;
	    }
	    cout<<ans<<endl;
    }
    return 0;
}


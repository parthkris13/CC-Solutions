#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int M = 1e9 + 7, N = 1e6 + 5;
int parent[N], sz[N], vis[N];
vector<int> lang[N];
void make_set(int v){
    parent[v] = v;
    sz[v] = 1;
}
int find_set(int v){
    if (v == parent[v]) return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if (a != b){
        if (sz[a] < sz[b]) swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}
 
int32_t main(){
    IOS;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        while (k--){
            int x;
            cin >> x;
            lang[x].push_back(i);
        }
    }
    int check = 0;
    for (int i = 1; i<= m; i++) if (lang[i].size() != 0) check = 1;
    if (check == 0) cout << n, exit(0);
    for (int i = 0; i < n; i++) make_set(i);
    for (int i = 1; i <= m; i++) for (int j = 1; j < lang[i].size(); j++) union_sets(lang[i][j - 1], lang[i][j]);
    set<int> ans;
    for (int i = 0; i < n; i++) ans.insert(find_set(i));
    cout << ans.size() - 1;
}
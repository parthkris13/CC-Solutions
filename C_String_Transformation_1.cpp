#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
string a, b;
int parent[N], sz[N];
void make_set(int v){
    parent[v] = v;
    sz[v] = 1;
}
int find_set(int v){
    if(v == parent[v]) return v;
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
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cin >> a >> b;
        int check = 0;
        for (int i = 0; i < n; i++){
            if (b[i] < a[i]){
                check = 1;
                break;
            }
        }
        if (check) cout << -1 << "\n";
        else{
            for (int i = 'a'; i <= 't'; i++) make_set(i);
            int ans = 0;
            for (int i = 0; i < n; i++){
                if (find_set(a[i]) == find_set(b[i])) continue;
                ans++;
                union_sets(a[i], b[i]);
            }
            cout << ans << endl;
        }
    }
}


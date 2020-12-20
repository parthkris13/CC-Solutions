#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int M = 1e9 + 7, N = 1e6 + 5;
int parent[N], sz[N], vis[N];
void make_set(int v){
    parent[v] = v;
    sz[v] = 1;
}
int find_set(int v){
    if (v == parent[v])
        return v;
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
    while(t--){
        int n;
        cin >> n;
        int arr[n][n];
        for(int i = 0; i<n; i++) for(int j=0; j<n; j++) cin >> arr[i][j];
        int flag = 1;
        int ans = 0;
        for(int i = n-1; i>0; i--){
            if(flag){
                if(arr[i][i-1] != arr[i][i] - 1){
                    //cout << arr[i][i-1] << " " << arr[i][i] << endl;
                    ans++;
                    flag = 0;
                }
            }
            else{
                if(arr[i-1][i] != arr[i][i] - 1){
                    //cout << arr[i-1][i] << " " << arr[i][i] << endl;
                    ans++;
                    flag = 1;
                }
            }
        }
        cout << ans << endl;
    }
}
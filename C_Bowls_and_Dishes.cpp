#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int ans = 0;
map<int,int> dorime;
vector<pair<int,int>> u;
vector<pair<int,int>> v;
void pks(){
    int 
}
void check(){
    int t = 0;
    for(auto it: v){
        if(mp[it.first]>0&&mp[it.second]>0)
            t++;
    }
    ans = max(ans,t);
}
void func(int a,int k){
    if(a==k){
        check();
        return;
    }
    for(int i = 0;i < 2; i++){
        if(i==0){
            mp[u[a].first]++;
            func(a+1,k);
            mp[u[a].first]--;
        }else{
            mp[u[a].second]++;
            func(a+1,k);
            mp[u[a].second]--;
        }
    }
}
int32_t main()
{
    IOS;
    int n,m;
    cin >> n >> m;
    int a,b;
    for(int i = 0;i < m; i++){
        cin >> a >> b;
        v.push_back({a,b});
    }
    int k;
    cin >> k;
    for(int i = 0;i < k; i++){
        cin >> a >> b;
        u.push_back({a,b});
    }
    func(0,k);
    cout << ans << "\n";
    return 0;
}
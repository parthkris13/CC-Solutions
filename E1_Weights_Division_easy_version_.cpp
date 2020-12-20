#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N=1e5+5;
int t,k,l[N],W,n,u,v,s,w,ans;
set<pair<int,pair<int,int> > >S;
vector<pair<int,int> > V[N];
void dfs(int u,int p,int w){
	
	for(int i=0;i<V[u].size();i++){
		if(V[u][i].f!=p){
			dfs(V[u][i].f,u,V[u][i].s);
			l[u]+=l[V[u][i].f];
		}
	}
	l[u]=max(1ll,l[u]);W+=w*l[u]; 
	S.insert({-l[u]*((w+1)/2),{w,u}});
}
int32_t main(){
    IOS;
    cin >> t;
    while(t--){
        cin >> n >> s;
        while(t--){
		cin>>n>>s;
		for(k=1;k<=n;k++){
		l[k]=0;
		V[k].clear();}
		S.clear();  W=0;
		for(k=2;k<=n;k++){
			cin>>u>>v>>w;
			V[u].push_back({v,w});
			V[v].push_back({u,w});
		}
		
		dfs(1,0,0); 
		ans=0; 
		while(W>s){
			ans++;
			W+=(*S.begin()).f;
			w=(*S.begin()).s.f/2;
			u=(*S.begin()).s.s;
			S.erase(*S.begin());
				S.insert({-(w+1)/2*l[u],{w,u}}); 
			
		}
		cout<<ans<<endl;
        
        

    }
    return 0;    
}


#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mp(a,b) make_pair(a,b)
#define vi vector<int>
#define mii map<int,int>
#define mpi map<pair<int,int>,int>
#define vp vector<pair<int,int> >
#define pb(a) push_back(a)
#define fr(i,n) for(i=0;i<n;i++)
#define rep(i,a,n) for(i=a;i<n;i++)
#define F first
#define S second
#define endl "\n"
#define fast std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define dom 998244353
#define pi 3.14159265
#define sl(a) (int)a.length()
#define sz(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define pii pair<int,int> 
#define mini 2000000000000000000
#define time_taken 1.0 * clock() / CLOCKS_PER_SEC
//mt19937_64 mt(chrono::steady_clock::now().time_since_epoch().count());
vector<int> adj[100005];
int vis[100005],ans,l[100005],ch[100005];
void dfs(int x)
{
    vis[x]=1;
    int i,f=1;
    fr(i,sz(adj[x]))
    {
        if(!vis[adj[x][i]])
        {
            dfs(adj[x][i]);
            ch[x]++;
            l[x]+=l[adj[x][i]];
        }
    }
    ans+=((l[x]/3)*3);
    if(ch[x]==l[x]&&(l[x]%3==0))
        l[x]=1;
    else
        l[x]=0;
    //cout<<x<<" "<<l[x]<<endl;
}
void parth(int cas)
{
    int n,i;
    cin>>n;
    ans=0;
    fr(i,n+1)
    {
        vis[i]=0;
        ch[i]=0;
        l[i]=0;
        adj[i].clear();
    }
    int u,v;
    fr(i,n-1)
    {
        cin>>v;
        u=i+2;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1);
    cout<<n-ans<<endl;
}
signed main()
{
    fast;
    int t=1;
    cin>>t;
    int cas=1;
    while(cas<=t)
    {
    parth(cas);
    cas++;
    }
    return 0;
}
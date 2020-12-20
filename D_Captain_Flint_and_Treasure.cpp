/*
I had your back, but it's no use
False accusations are on the loose
You know what? It makes no sense that you tied your own noose
You never felt the sores decay
Your perfect world is ending today
So what? I wouldn't have it any other way
 
Is this your paradise? You think you thought this through?
'Cause when you rolled the dice, the house came down on you
Don't care what you do or say, your suicide begins today
Have fun in paradise, this hell is just for you
 
You against you
Shitty time to make a stand all without a master plan, just you
You against you
 
So how's your paradise? Hindsight just laughs at you
With conflict comes a price, that price weighs heaviest on you
I guess I should say thanks, dissension in the ranks
Your panic lit the fuel, now it's you against you
You against you
 
Wasn’t looking for a fight, but I'm showing up tonight
Shitty time to make a stand all without a master plan, just you
You against you
 
These seeds are what you've sown
Never should have lit that fuse
Enjoy your paradise
This hell is just for you
 
You against you
Wasn’t looking for a fight, but I'm showing up tonight
Shitty time to make a stand all without a master plan, just you
You against you
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(v) v.begin(),v.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
vector<int> g[N] , a, b , res,res2,vis;
int ans =0;
vector<int> order; //Stores the Topological Order
bool toposort(int n) //Returns 1 if there exists a toposort, 0 if there is a cycle
{   
    order.clear();
    queue<int> q;
    vector<int> indeg(n , 0);
    for(int i = 0 ; i < n; i++)
        for(auto &it:g[i])
            indeg[it]++;
    for(int i = 0; i < n; i++)
    {
        if(!indeg[i])
            q.push(i);
    }
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        order.push_back(u);
        for(auto &v:g[u])
        {
            indeg[v]--;
            if(!indeg[v])
                q.push(v);
        }
    }
    return (order.size() == n);
}
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin>>n; 
        a.resize(n);
        b.resize(n);
        vis.resize(n,0);
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
            g[i].clear();
        }
        for (int i = 0; i < n; ++i)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if(b[i]==-1)
                continue;
            b[i]--;
            g[i].push_back(b[i]);
        }
        ans = 0;
        bool ok = toposort(n);
        for(auto x : order)
        {
            ans+=a[x];
            if(a[x]<0)
                res2.push_back(x);
            else
            {
                res.push_back(x);
                if(b[x]!=-1)
                    a[b[x]]+=a[x];
            }
        }
        cout<<ans<<endl;
        for(auto x : res)
            cout<<x+1<<" ";
        if(!res2.empty())
        reverse(all(res2));
        for(auto x : res2)
            cout<<x+1<<" ";
 
        cout<<endl;
    }
    return 0;
}


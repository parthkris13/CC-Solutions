#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    
   string name;
   cin>>name;
   string x,y,act;
  int m;
  cin>>m;
  map<string,int>mp;
  while(m--)
  {
    cin>>x;
    cin>>act;
    int inc=0;
    if(act=="posted")
    {
      cin>>act;
      inc=15;
    }
    else if(act=="commented")
    {
      cin>>act;
      inc=10;
    }
    else
    {
      inc=5;
    }
    cin>>y;
    y.erase(y.size()-2);
    cin>>act;
    if(x!=name && y!=name)
    {
      inc=0;
    }
    mp[x]+=inc;
    mp[y]+=inc;
  }
  vector<pair<int,string>> ans;
  for(auto p:mp){
    if(p.first==name) continue;
    ans.push_back({-p.second,p.first});
  }
  sort(ans.begin(), ans.end());
  for(int i=0;i<ans.size();i++) cout<<ans[i].second<<endl;
    return 0; 
    
}


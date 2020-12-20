#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        string s; 
        cin>>s;
        int x;
        cin>>x; 
        string ans(s.size(), '1');
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(i-x>=0) ans[i-x]='0';
                if(i+x<s.size()) ans[i+x]='0';
            }
        }
        bool ok=1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                int cnt=0;
                if(i-x>=0 && ans[i-x]=='1') cnt++;
                if(i+x<s.size() && ans[i+x]=='1') cnt++;
                if(cnt==0) ok=0;
            }
        } 
        if(ok) cout<<ans;
        else cout<<-1;
        cout<<endl;
    }
    return 0;
}


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
        cin >> s;
        int ans = 0;
        int count[26]={0};
        for(int i = 0; i<s.size(); i++) count[s[i] - 'a']++;
        for(int i = 0; i<26; i++){
            //cout << count[i] << endl;
            if(count[i] >=3){
                int p = count[i]/3;
                ans+=p;
                count[i]%=3;
            }
        }
        int o=0, t=0;
        for(int i=0; i<26; i++){
            if(count[i]==2) t++;
            else if(count[i]==1) o++;
            else continue;
        }
        //cout << o << " " << t << endl;
        ans+=min(o,t);
        cout << ans << endl;
    }
    return 0;
}
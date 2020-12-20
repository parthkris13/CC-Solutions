#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        string s, p;
        cin >> s >> p;
        string ans;
        int count[26] = {};
        for(int i=0; i<s.size(); i++) count[s[i] - 'a']++;
        for(int i=0; i<p.size(); i++) count[p[i] - 'a']--;
        int lim = (p[0] - 'a');
        int flag = 0;
        for(int i=0; i<p.size()-1; i++){
            if((int)(p[i]) > (int)(p[i+1])){
                flag = 1;
                break;
            }
            if((int)(p[i]) < (int)(p[i+1])) break;

        }
        //cout << flag << endl;
        if(!flag){
            for(int i=0; i<=lim; i++){
                int t = count[i];
                while(t--) ans += (char)('a'+ i );
            }
            ans += p;
            for(int i=lim+1; i<26; i++){
                int t = count[i];
                while(t--) ans += (char)('a'+ i );
            }
            cout << ans << endl;
        }
        else{
            for(int i=0; i<lim; i++){
                int t = count[i];
                while(t--) ans += (char)('a'+ i );
            }
            //cout << ans << endl;
            ans += p;
           // cout << ans << endl;
            for(int i=lim; i<26; i++){
                int t = count[i];
                while(t--) ans += (char)('a'+ i );
            }
            cout << ans << endl;

        }
        


        
        
    }
    return 0;
    
}


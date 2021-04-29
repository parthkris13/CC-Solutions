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
        int o=0,z=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '0') z++;
            else o++;
        }
        if(s.size()%2==1) cout << -1 << endl;
        else if(o==z) cout << 0 << endl;
        else{
            int p = 0;
            for(int i = 0; i<s.size()-1; i++){
                if(s[i]!=s[i+1]){
                    p=1;
                    break;
                }
            }
            if(p) cout << abs(o-z)/2 << endl;
            else cout << -1 << endl;
        }     
        
    }
    return 0;
}
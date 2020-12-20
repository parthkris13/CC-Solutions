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
    int z = t;
    while(t--){
        string s;
        cin >> s;
        vector<int> parth;
        int n = s.size();
        for(int i = 0; i<n; i++){
            if(s[i]=='K'){
                if(s[i+1]=='I'){
                    if(s[i+2]=='C'){
                        if(s[i+3]=='K') parth.push_back(1);
                    }
                }
            }
            else if(s[i]=='S'){
                if(s[i+1]=='T'){
                    if(s[i+2]=='A'){
                        if(s[i+3]=='R'){
                            if(s[i+4]=='T') parth.push_back(2);
                        }
                    }
                }
            }
        }
        int ans = 0;
        int c1=0;
        for(int it : parth){
            //cout << it << " ";
            if(it==1) c1++;
            else ans+=c1;
        }
        //cout << endl;
        
        cout << "Case #" << (z-t) <<": " << ans << endl;
    }
    return 0;
}
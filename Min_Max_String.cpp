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
        int n;
        cin >> n;
        vector<string> v;
        for(int i=0; i<0; i++){
            string s;
            cin >> s;
            v.push_back(s);
        }
        int q;
        cin >> q;
        while(q--){
            int c;
            cin >> c;
            if(c==1){
                int z;
                char x;
                cin >> z >> x;
                v[z-1] += x;
            }
            if()
        }
    }
    return 0;    
}


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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while(q--){
            int l,r;
            cin >> l >> r;
            string p;
            for(int i = l-1; i<r; i++){
                
                p+=s[i];
            
            }
            char a,b;
            a = p[0];
            b = p[p.size()-1];
            int flag = 0;
            for(int i = 0; i<l-1; i++){
                if(s[i] == a){
                    flag = 1;
                    break;
                }
            }
            if(flag==0){
                for(int i = r; i<n; i++){
                    if(s[i] == b){
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;

        }
        
        
    }
    return 0;
}
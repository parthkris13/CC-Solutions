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
        string s,t;
        cin >> s >> t;
        int ns = s.size();
        int nt = t.size();
        int hcf = __gcd(ns,nt);
        int lcm = (ns*nt)/hcf;
        int pks = ns*nt;


        string ss = " ";
        string tt = " ";
        for(int i = 0; i<nt; i++) ss+=s;
        for(int i = 0; i<ns; i++) tt+=t;
        cout << s << " " << t << endl;
        cout << ss << " " << tt << endl;
        if(ss==tt){
            int p = lcm/nt;
            string ans = t;
            for(int i = 0; i<p; i++) ans+=t;
            cout << ans << endl;
        }
        else cout << -1 << endl;




        
    }
    return 0;
}
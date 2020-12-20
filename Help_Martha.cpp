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
        string s;
        cin >>s;
        int x1, y1;
        cin >> x1 >> y1;
        int r=0, l=0, u=0, d=0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'R') r++;
            else if(s[i] == 'L') l++;
            else if(s[i] == 'U') u++;
            else d++;
        }
        //cout << r << l << u << d << endl;
        int q;
        cin >> q;
        while(q--){
            int x2,y2;
            cin >> x2 >> y2;
            int flag = 1;
            int h = x1-x2;
            int v = y1-y2;
            //cout << v << endl;
            if(v <= 0) if(abs(v) > u) flag = 0;
            if(v>0) if(abs(v) > d) flag = 0; 
            if(h <= 0) if(abs(h) > r) flag = 0;
            if(h>0) if(abs(h) > l) flag = 0;
            if(flag) cout << "YES " << abs(v) + abs(h) << endl;
            else cout << "NO" << endl;
             

        }
        


    }
    return 0;    
}


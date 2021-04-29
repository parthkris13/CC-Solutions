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
        int x,y;
        cin >> x >> y;
        int u=0, d=0, l=0, r=0;
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='U') u++;
            else if(s[i]=='D') d++;
            else if(s[i]=='R') r++;
            else l++;
        }
        int verti = y-u+d;
        int hori = x-r+l;
        int flag=0;
        if(verti!=0){
            if(verti>0 && verti<=d) flag++;
            else if(verti<0 && abs(verti)<=u) flag++;
        }
        else flag++;
        if(hori!=0){
            if(hori>0 && hori<=l) flag++;
            else if(hori<0 && abs(hori)<=r) flag++;
        }
        else flag++;
       

        
        if(flag == 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
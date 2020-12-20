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
        int a,b;
        cin >> a >> b;
        string s;
        cin >> s;
        int mine = 0;
        int flag1 = 0;
        int p = 0;
        for(int i = 0; i<s.size(); i++) if(s[i] == '1') mine++;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '0' && flag1 == 0) continue;
            else if(s[i] == '0' && flag1 == 1) p++;
            else flag1=1;
        }
        for(int i = s.size() - 1; i>=0; i--){
            if(s[i] == '0') p--;
            else break;
        }
        
        
        cout << endl;
    }
    return 0;
}
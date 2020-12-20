#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 10000000000;
        if(s[0] == '1' && s[1] == '1' && s[2] == '0') ans -=(s.size()/3);
        else if(s[0] == '1' && s[1] == '0' && s[2] == '1') ans -=(((s.size()+1)/3));
        else if(s[0] == '0' && s[1] == '1' && s[2] == '1') ans -=(((s.size()+2)/3));
        else if(s.size() == 1 && s[0] == '1') ans*=2;
        else if(s.size() == 1 && s[0] == '0') ans = ans;
        else if(s.size() == 2 && s[0] == '1' && s[1] == '1' ) ans = ans;
        else if(s.size() == 2 && s[0] == '1' && s[1] == '0' ) ans = ans;
        else if(s.size() == 2 && s[0] == '0' && s[1] == '1' ) ans-=1;
        else ans = 0;
        
        cout << ans << endl;
    }
    return 0;
}
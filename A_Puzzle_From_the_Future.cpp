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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "1";
        int p;
        if(s[0] == '1') p = 2;
        else p = 1;
        for(int i=1; i<n; i++){
            if(s[i] == '1' && p == 2){
                ans+='0';
                p=1;
            }
            else if(s[i] == '1' && p == 1){
                ans+='1';
                p=2;
            }
            else if(s[i] == '1' && p == 0){
                ans+='1';
                p=2;
            }
            else if(s[i] == '0' && p == 2){
                ans+='1';
                p=1;
            }
            else if(s[i] == '0' && p == 0){
                ans+='1';
                p=1;
            }
            else {
                ans+='0';
                p=0;
            }
            


        }
        cout << ans << endl;
    }
    return 0;
}
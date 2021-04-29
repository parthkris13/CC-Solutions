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
        for(int i=0; i<s.size(); i++){
            if(i%2==0){
                if(s[i]=='a') s[i] = 'b';
                else s[i] = 'a';
            }
            else{
                if(s[i]=='z') s[i] = 'y';
                else s[i] = 'z';
            }
        }
        
        cout << s  << endl;
    }
    return 0;
}
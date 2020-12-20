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
        int count = 0;
        stack<char> a,b;
        cin >> s;
        for(int i = 0;i < s.size(); i++){
            if(s[i]=='(') a.push(s[i]);
            if(s[i]=='[') b.push(s[i]);
            if(s[i]==')'){
                if(!a.empty()){
                    count++;
                    a.pop();
                }        
            }
            if(s[i]==']'){
                if(!b.empty()){
                    count++;
                    b.pop();
                }
            }
        }
       cout << count;
        
        cout << endl;
    }
    return 0;
}
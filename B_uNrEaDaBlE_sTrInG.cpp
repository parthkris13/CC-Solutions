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
        string s;
        cin >> s;
        int flag = 1;
        for(int i=0; i<s.size(); i++){
            char c = s[i];
            if(i%2==0){
                if(c-'A' <=25){
                    //cout << i <<  endl;
                    flag = 0;
                    break;
                }
            }
            else{
                if(c-'A' >=26){
                    //cout <<  i <<  endl;
                    flag = 0;
                    break;
                }
            }
        }
        
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
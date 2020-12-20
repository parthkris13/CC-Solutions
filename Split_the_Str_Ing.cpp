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
        char b = s[n-1];
        int flag = 1;
        for(int i = 0; i<n-1; i++){
            if(s[i]==b){
                cout << "YES" << endl;
                flag = 0;
                break;
            }
        }
        
        
        if(flag) cout << "NO" << endl;
    }
    return 0;
}
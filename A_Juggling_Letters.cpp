#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int M = 1e9 + 7, N = 1e6 + 5; 
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count[26] = {0};
        for(int i = 0; i<n; i++){
            string s;
            cin >> s;
            for(int j = 0; j<s.size(); j++) count[s[j] - 'a']++;
        }
        int flag = 1;
        for(int i=0;i<26; i++){
            if(count[i]==0) continue;
            if(count[i]%n == 0) continue;
            else{
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
    }
}
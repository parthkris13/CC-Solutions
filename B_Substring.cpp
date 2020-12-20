#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    string s,t;
    cin >> s >> t;
    int x = s.size();
    int y = t.size();
    int ans = INT_MAX;
    for(int i=0; i<x-y+1; i++){
        int c = 0;
        for(int j = 0; j<y; j++){
            if(s[i+j] != t[j]) c++;
        }
        if(c < ans) ans = c;
    }
    cout << ans << endl;

     
    return 0;
}


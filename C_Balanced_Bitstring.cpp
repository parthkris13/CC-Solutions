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
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int f = 0;
        int c0=0,c1=0,c2=0;
        for(int i=0;i<k;i++){
            char ch=s[i];
            for(int j = i+k;j<n;j+=k){
                if(ch == '?') ch=s[j];
                else if(s[j] != '?' && ch !=s[j]) f=1;
            }
            if(ch == '0') c0++;
            else if(ch == '1') c1++;
        }
        if(c0 > k/2 || c1> k/2) f=1;
        if(!f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}


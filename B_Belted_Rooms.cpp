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
        int n,r=0,l=0,ans=0;
        string s;
        cin >> n >> s;
        for(int i = 0;i < n; i++){
            if(s[i]=='<') r++;
            else if(s[i]=='>') l++;
            else continue;
        }
        if(r==0||l==0) cout << n << endl;
        else{
            for(int i = 0; i<n; i++){
                if(i==0 && (s[i]=='-'||s[n-1]=='-')) ans++; 
                else if(s[i]=='-'||s[i-1]=='-') ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
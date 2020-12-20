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
        int n,x;
        string s;
        cin >> n >> x >> s;
        for(int i = 0; i<n; i++){
            if(s[i]=='o') x++;
            else{
                if(x>0) x--;
            }
        }
        
        cout << x<< endl;
    }
    return 0;
}
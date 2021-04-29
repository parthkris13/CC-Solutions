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
        int r=0, l=0, q=0;
        int n = s.size();
        int flag1 = 0;
        int flag2 = 0;
        int flag3 = 1;
        int pks = 0;
        if((n-2)%2 == 0 && s[0]!=')' && s[n-1]!='(') cout << "YES";
        else cout << "NO";
        
        cout << endl;
    }
    return 0;
}
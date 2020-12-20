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
        int a,b,c;
        cin >> a >> b >> c;
        int s = a+b+c;
        int p = min({a,b,c});

        if(s%9==0&&((s/9)<=p)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
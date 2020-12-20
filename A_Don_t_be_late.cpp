#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int d,t,s; 
    cin>>d>>t>>s;
    int p = d/s;
    if(p<t) cout << "Yes" << endl;
    else if(p == t && d%s==0) cout << "Yes" << endl;
    else cout <<"No" << endl;
     
    return 0;
}


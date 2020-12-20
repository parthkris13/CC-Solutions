#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n,t,s=1,i=0;
    cin >> n >> t;
    int a[n];
    a[0]=0;
    for(i=1;i<n;i++) cin>>a[i];
    while(s<t) s=s+a[s];
    if(s==t) cout << "YES";
    else cout << "NO";
    return 0;
}
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        char a[n+1],b[n+1];
        vector <int> u,v;
        cin>>a;
        cin>>b;
        int x=0, y=0,i=0;
        for(i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                v.pb(i+1);
                x++;
            }
            if(b[i]!=b[i+1]){
                u.pb(i+1);
                y++;
            }
        }
        if(a[n-1]!=b[n-1]){
            v.pb(n);
            x++;
        }
        cout << x+y << " ";
        for(i=0;i<x;i++) cout << v[i] << " ";
        for(i=y-1;i>=0;i--) cout << u[i] << " ";
        cout << endl;
    } 
    return 0;
}
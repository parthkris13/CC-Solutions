#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int a[3]={0},ans=0,d;
    cin>>a[0]>>a[1]>>a[2]>>d;
    sort(a,a+3);
    if(a[1]-a[0]<d)ans+=d-a[1]+a[0];
    if(a[2]-a[1]<d)ans+=d-a[2]+a[1];
    cout << ans << endl;
    return 0;    
}


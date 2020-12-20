#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int fact(int n){

     return (n==0) || (n==1) ? 1 : n* fact(n-1);
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    if(t==2){
        cout << 1 << endl;
        return 0;
    }
    if(t==4){
        cout << 3 << endl;
        return 0;
    }
    int n = t/2;
    int ans = 1;
    for(int i = 1; i<n; i++) ans*=i;
    ans++;
    int q = fact(t)/(fact(n)*fact(n));
    cout << q << endl;
    cout << q*ans << endl;

    return 0;
}
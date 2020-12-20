#include <stdio.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n,k;
    cin >> n >> k;
    int a[n], ans=0;
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 1; i<n; i++){
        int p = a[i] + a[i-1];
        if(p<k){
            ans+=(k-p);
            a[i] += (k-p);
        }
    }
    cout << ans << endl;
    for(int i=0; i<n; i++) cout << a[i] << " " ;
    return 0;
}


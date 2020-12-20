#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n;
    cin >> n;
    int count = 0;
    for(int i = 1; i<n; i++) count+=
    for(int a = 1; a*a<=n; a++){
        int p = n/a;
        count += (p-a);
    }
    cout << 2*count + 1 << endl;
    

}
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int s,n, count;
        cin >> s >> n;
       // cout << "pks " << s%2 << endl;
        if(s%2) count = 1, s = s-1;
        else count = 0;
        if(s%n == 0) count += s/n;
        else count += (s/n) + 1;
        cout  << count << endl;
    }
    return 0;
}
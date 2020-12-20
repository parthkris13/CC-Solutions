#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n;
    cin  >> n;
    if(n%2 == 0) return cout << -1, 0;
    if(n%5 == 0) return cout << -1, 0;

    int p = 7;
    int ans = 1;
    while(p%n !=0){
        p = 10*p + 7;
        ans++;
    }
    cout << ans << endl;

}


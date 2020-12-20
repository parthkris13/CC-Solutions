#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;

int32_t main(){
    IOS;
    int n;
    cin >> n;
    int max = 0;
    cin >> max;
    n--;
    int ans = 0;
    while(n--){
        int p;
        cin >> p;
        if(p < max) ans += (max-p);
        else max = p;
    }
    cout << ans << endl;
    return 0;
}


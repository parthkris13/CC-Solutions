#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 5;
int a[N][N];
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n = 3, i, j, d;
    for(i = 1; i <= n; i++)for(j = 1; j <= n; ++j) cin >> d, a[i][j] = d % 2;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++) cout << (1 ^ a[i-1][j] ^ a[i][j-1] ^ a[i][j] ^ a[i+1][j] ^ a[i][j+1]);
        cout << endl;
    }
    return 0;
    
}


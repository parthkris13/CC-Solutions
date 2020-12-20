#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 5;
int a[N][N];
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int a,b,n;
    cin >> a >> b >>n;
    int x = a % b;
    x *= 10;
    x %= b;
    x = (b - x) % b;
    if(x > 9) return cout << -1, 0;
    cout << a << x;
    for(int i = 1; i < n; i++) cout << 0;
    cout << endl;
    return 0;
    
}


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define chronos ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int N = 998244353;
int32_t main(){
    chronos;
    int w, h;
    cin >> w >> h;
    int b, a = 2, r = 1;
    b = w + h;
    while (b){
        if (b % 2) r = (r * a) % N;
        a = (a * a) % N;
        b /= 2;
    }
    cout << r;
    return 0;
}


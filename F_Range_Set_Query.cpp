#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n,q;
    cin  >> n >> q;
    int arr[n];
    for(int &x : arr) cin >> x;
    while(q--){
        set <int> pks;
        int x, y;
        cin >> x >> y;
        for(int i=x-1; i<y; i++) pks.insert(arr[i]);
        cout << pks.size() << endl;
    }
    return 0;
}


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
    for(int i = 0; i<n; i++){
        int x,y;
        cin >> x >> y;
        if(x==y) count++;
        else count = 0;
        if(count == 3) break;
    }
    if(count == 3) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;

}
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 100000;
int arr[N];
int32_t main(){
    IOS;
    int n; 
    cin>>n;
    int ans=0;
    int currx=0, curry=0;
    while(n--){
        int x,y;
        cin >> x >>y;
        int distx = abs(x - currx);
        int disty = abs(y - curry);
        ans += min(distx,disty);
        ans += abs(distx - disty);
        currx = x;
        curry = y;
    }
    cout << ans << endl;
    return 0;
}


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
int32_t main(){
    IOS;
    int w,l;
    cin >> w >> l;
    int arr[w];
    for(int i = 1; i<w; i++){
        cin >> arr[i];
        if(i>0) arr[i] += arr[i-1];
    }
    int mini = INT32_MAX;
    for(int i=l; i<w; i++) mini = min(mini, arr[i] - arr[i-l]);
    cout << mini << endl;
    return 0;
}


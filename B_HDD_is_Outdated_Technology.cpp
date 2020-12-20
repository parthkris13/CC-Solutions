#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        x--;
        arr[x] = i;
    }
    for (int i = 0; i < n - 1; i++) ans += abs(arr[i] - arr[i + 1]);
    cout << ans << endl;
    return 0; 
    
}


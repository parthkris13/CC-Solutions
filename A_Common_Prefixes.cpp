#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        string s;
        for (int i = 0; i < 200; i++) s += 'a';
        vector<string> ans(n + 1, s);
        for (int i = 0; i < n; i++){
            ans[i + 1] = ans[i];
            if (ans[i + 1][arr[i]] == 'a') ans[i + 1][arr[i]] = 'b';
            else ans[i + 1][arr[i]] = 'a';
            cout << ans[i] << endl;;
        }
        cout << ans[n] << endl;
    }
    return 0;
}


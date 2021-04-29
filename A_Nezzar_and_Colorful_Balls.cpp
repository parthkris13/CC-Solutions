#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        int ans = 1;
        int streak = 1;
        for(int i = 1; i<n; i++){
            //cout << streak << endl;
            if(arr[i] == arr[i-1]) streak++;
            else{
                ans = max(streak, ans);
                streak = 1;
            }
        }
        ans = max(streak,ans);
        cout << ans << endl;
    }
    return 0;
}
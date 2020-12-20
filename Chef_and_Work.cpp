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
        int n,k;
        cin >> n >> k;
        int arr[n];
        int ans = 1;
        int sum = 0;
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i=0; i<n;i++){
            if(arr[i] > k) {
                ans = -1;
                break;
            }
            sum+=arr[i];
            if(sum <= k) continue;
            else {
                sum = arr[i];
                ans++;
            }
        }
        cout <<  ans << endl;
    }
    return 0;
}


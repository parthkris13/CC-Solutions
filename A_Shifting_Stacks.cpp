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
        int flag = 1;
        for(int i=0; i<n-1; i++){
            if(arr[i]>=i){
                arr[i+1]+=(arr[i]-i);
            }
            else{
                flag = 0;
                break;
            }
        }
        if(arr[n-1] <n-1) flag = 0;
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
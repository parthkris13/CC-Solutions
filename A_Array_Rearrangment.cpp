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
        int n,x, flag=0;
        cin >> n >> x;
        int arr[n], brr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i=0; i<n; i++) cin >> brr[i];
        for(int i = 0; i<n; i++){
            if(arr[i] + brr[n-1-i] > x){
                flag = 1;
                break;
            }
        }
        if(!flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
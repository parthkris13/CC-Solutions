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
        int arr[n], brr[n];
        int mini = INT32_MAX;
        for(int i =0; i<n; i++){
            cin >> arr[i];
            brr[i] = arr[i];
            if(arr[i] < mini) mini = arr[i];
        }
        sort(brr,brr+n);
        int flag = 1;
        for(int i = 0; i<n; i++){
            if(arr[i] == brr[i]) continue;
            else{
                if( arr[i]%mini != 0 ){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    return 0;
}


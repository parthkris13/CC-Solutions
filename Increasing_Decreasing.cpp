#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i =0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
        if(arr[n-1] == arr[n-2]){
            cout << "NO" << endl;
            continue;
        }
        int flag = 0;
        for(int i =0; i<n-2; i++){
            if(arr[i] == arr[i+1] && arr[i]== arr[i+2]) flag = 1;
        }
        if(flag){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        int ans[n], j=0, k = n-1;
        for(int i =0; i<n-1; i++){
            if(arr[i] == arr[i+1]){
                ans[j++] = arr[i];
                ans[k--] = arr[i];
                i++;
            }
            else ans[j++] = arr[i];            
        }
        ans[j] = arr[n-1];
        for(int i = 0; i<n; i++) cout << ans[i] <<" ";
        cout << endl;
    }
    return 0;
}
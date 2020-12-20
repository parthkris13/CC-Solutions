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
    for(int &x : arr) cin >> x;
    sort(arr,arr+n);
    int ans = 0;
    for(int i = 0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sum = 0;
            if(arr[i] != arr[j]) sum = arr[i] + arr[j];
            else continue;
            for(int k = j+1; k<n; k++){
                if(arr[j] == arr[k]) continue;
                else{
                    if(arr[k] < sum) ans++;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;    
}


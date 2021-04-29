#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        int arr[n], brr[n];
        int maxa[n], maxb[n];
        for(int i = 0; i<n; i++){
            cin >> arr[i];
            if(i==0) maxa[0] = arr[0];
            else maxa[i] = max(arr[i], maxa[i-1]);
        }
        for(int i = 0; i<n; i++) cin >> brr[i];
        maxb[n-1] = brr[n-1];
        for(int i=n-2; i>=0; i--) maxb[i] = max(brr[i], maxb[i+1]);
        for(int i = 0; i<n; i++) cout << maxa[i]*maxb[i] << endl;
        
        
    }
    return 0;
}
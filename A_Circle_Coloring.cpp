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
        int arr[n],brr[n],crr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i=0; i<n; i++) cin >> brr[i];
        for(int i=0; i<n; i++) cin >> crr[i];
        int prr[n] = {0};
        prr[0] = arr[0];
        for(int i = 1; i<n; i++){
            if(arr[i] != prr[i-1]) prr[i] = arr[i];
            else if(brr[i] != prr[i-1]) prr[i] = brr[i];
            else prr[i] = crr[i];
        }
        if(prr[n-1] == prr[0]){
            if(arr[n-1] != prr[n-1] && arr[n-1]!=prr[n-2]) prr[n-1] = arr[n-1];
            else if(brr[n-1] != prr[n-1] && brr[n-1]!=prr[n-2]) prr[n-1] = brr[n-1];
            else prr[n-1] = crr[n-1];
        }
        for(int i = 0; i<n; i++ ) cout << prr[i] << " ";
        cout << endl;

    }
    return 0;
}
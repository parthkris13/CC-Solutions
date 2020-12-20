#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    int z = t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int &x : arr) cin >> x;
        int diff[n-1];
        for(int i = 0; i< n-1; i++){
            diff[i] = arr[i+1] - arr[i];
        }
        int max = 1;
        int p = 1;
        for(int i=0; i<n-1; i++){
            if(diff[i] == diff[i+1]) p++;
            else{
                if(p>max) max = p;
                p=1;
            } 
        }
        cout << "Case #" << (z-t) <<": " << max+1 << endl;
    }
    return 0;
}


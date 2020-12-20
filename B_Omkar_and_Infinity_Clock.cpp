#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        int max = INT32_MIN;
        for(int i=0; i<n; i++){
            int p;
            cin >> p;
            arr[i] = p;
            if(p > max) max = p;
        }
        int max2 = INT32_MIN;
        if(1){
            
            for(int i=0; i<n; i++){
                arr[i] = max - arr[i];
                if(arr[i] > max2) max2 = arr[i];
            }
        }
        if(k%2==0){
            for(int i=0; i<n; i++){
                arr[i] = max2 - arr[i];
                //if(arr[i] > max2) max2 = arr[i];
            }
        }
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

        

    }
    return 0;    
}


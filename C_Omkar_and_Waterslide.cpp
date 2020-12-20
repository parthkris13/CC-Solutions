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
        int n;
        cin >> n;
        int arr[n];
        int ans=0;
        int max = INT32_MIN;
        for(int i=0; i<n; i++){
            int p;
            cin >> p;
            arr[i] = p;
            if(p > max) max = p;
        }
        int k = -1;
        bool pks = false;
        int mini = INT32_MAX;
        for(int i = 1;i < n; i++){
            if(pks){
                if(arr[i] < k){
                    if(arr[i]>=mini){
                        ans += (arr[i]-mini);
                        mini = arr[i];
                    }
                    else mini = min(mini,arr[i]);
                }
                else{
                    ans += (k-mini);
                    pks = false;
                }
            }
            else{ 
                if(arr[i] < arr[i-1]){
                    pks = true;
                    k = arr[i-1];
                    mini = arr[i];
                }
            }
        }
        if(pks && (k !=-1)) ans+=(k-mini);
        cout << ans << endl;

        

    }
    return 0;    
}


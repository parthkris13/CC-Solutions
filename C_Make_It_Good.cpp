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
        int p = -1,q = -1;
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i = n-1; i>=0; i--){
            if(arr[i] <= arr[i-1]) continue;
            else {
                p = i;
                break;
            }    
        }
        for(int j = p-1; j>=0; j--){
            if(arr[j] >= arr[j-1]) continue;
            else {
                q = j;
                break;
            } 
        }
        if(q==-1) cout << "0" << endl;
        else cout << q << endl;
    }
    return 0;
}


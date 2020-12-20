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
        int flag = 1;
        for(int i = 0; i<n; i++) cin >> arr[i];
        for(int i = 0; i<n; i++){
            if((i+1)%arr[i] == 0) continue;
            else{
                flag = 0;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}
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
        int count=0;
        for(int i=0; i<n; i++) cin >> arr[i];  
        for(int i=0; i<n-1; i++){
            if(arr[i] == 1) count++;
            else break;
        }
        if(count%2 == 0) cout << "First" << endl;
        else cout << "Second" << endl;
    }
    return 0;
}


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 1e5 + 5;
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i<n; i++)cin >> arr[i];
        int flag = 1;
        sort(arr,arr+n);
        if(n==1){
            cout << "T" << endl;
            continue;
        }
        // if(n==2){
        //     if(arr[1] > arr[0]) cout << "T" << endl;
        //     else cout << "HL" << endl;
        //     continue;
        // }
        while(1){
            if(arr[n-1] == 0) break;
            arr[n-1]--;
            flag = 0;
            if(arr[n-2] == 0) break;
            arr[n-2]--;
            flag = 1; 
            
            //for(int i = 0; i<n; i++) cout << arr[i] << " ";
            //cout << endl;
            sort(arr,arr+n);
        }
        if(flag) cout << "HL" <<endl;
        else cout << "T" << endl;


    }
    
    return 0;
}


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
        int arr[n];
        int p = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            p+=arr[i];
        }
        if(p==0) cout << "NO";
        else{
            cout << "YES" << endl;
            if(p>0){
                sort(arr,arr+n, greater<int>());
                for(int i = 0; i<n; i++) cout << arr[i] << " ";
            }
            else{
                sort(arr,arr+n);
                for(int i = 0; i<n; i++) cout << arr[i] << " ";
            }
            
        }
        
        cout << endl;
    }
    return 0;
}
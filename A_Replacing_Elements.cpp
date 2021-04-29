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
        int d;
        cin >> d;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        sort(arr,arr+n);
        int pks = arr[0] + arr[1];
        if(pks<=d || arr[n-1]<=d) cout << "YES";
        else cout << "NO"; 
        
        cout << endl;
    }
    return 0;
}
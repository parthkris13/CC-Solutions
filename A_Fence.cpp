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
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr,arr+3);
        cout << arr[1];
        
        cout << endl;
    }
    return 0;
}
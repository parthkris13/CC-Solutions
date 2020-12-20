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
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i=0; i<n;i++){
            if(i&1) arr[i] = -1*abs(arr[i]);
            else arr[i] = abs(arr[i]);
        }
        for(int i=0; i<n; i++) cout <<  arr[i] << " ";
        cout << endl;
    }
    return 0;
}


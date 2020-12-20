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
        int n,k;
        cin >> n >> k;
        int arr[n*k];
        //cout << n*k << endl;
        for(int i=0; i<n*k; i++) cin >> arr[i];
        int p = (n+1)/2;
        //cout << p << endl;
        int q = n-p+1;
        int ans=0;
        for(int i = (p-1)*k; i<n*k; i+=q){
            //cout << arr[i] <<  endl;
            ans+=arr[i];
        }
        cout <<ans<< endl;
    }
    return 0;
}
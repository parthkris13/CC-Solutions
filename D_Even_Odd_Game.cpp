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
        int alice = 0, bob = 0;
        sort(arr,arr+n,greater<int>());
        for(int i=0; i<n; i++){
            if(arr[i]%2==0 && i%2==0) alice+=arr[i];
            if(arr[i]%2!=0 && i%2!=0) bob+=arr[i];
        }

        if(bob>alice) cout <<"Bob" << endl;
        else if(bob < alice) cout << "Alice" << endl;
        else cout << "Tie" << endl;
    }
    return 0;
}
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
        int n,m;
        cin >> n >> m;
        int arr[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum+=arr[i];

        }
        
        if(sum==m) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}
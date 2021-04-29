#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int arr[100000008];
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        map<int,int> dorime;
        
        arr[0] = 0;
        arr[1] = 1;
        for(int i=2; i<100000000; i++){
            arr[i] = i + arr[i-1];
            dorime[arr[i]] = 1;
            
        }
        cout << "pks" << endl;
        int ans = 0;
        for(int i=0; i<100000000; i++) if(dorime[n-arr[i]]==1) ans++;

        
        cout << ans << endl;
    }
    return 0;
}
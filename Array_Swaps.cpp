#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n,m;
        cin >> n >> m;
        int arr[n], brr[m];
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i = 0; i<m; i++) cin >> brr[i];
        int swaps = 0;
        sort(arr,arr+n);
        sort(brr,brr+m);
        for (int i = 0; i < m; i++){
            if (arr[0] > brr[i]) swaps += n;
            else break;
        }
        
        cout << swaps <<  endl;
    }
    return 0;
}
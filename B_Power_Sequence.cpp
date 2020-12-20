#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 1e5 + 5;
int32_t main(){
    IOS;
    int n;
    cin >> n;
    int arr[n];
    //int pow[n] = {0};
    int flag = 1;
    for(int i = 0; i<n; i++) cin >> arr[i];
    int ans = 0;
    sort(arr,arr+n);
    if(n<32){
        int c = 1;
        int min = INT_MAX;
        int pks = (int)pow(c,n-1);
        int chronos;
        while(pks<=arr[n-1]||!(flag)){
            if(abs(arr[n-1]-pks)<min) chronos = c;
            if(!flag) break;
            c++;
            pks = (int)pow(c,n-1);
            if(pks>arr[n-1]) flag = 0;
        }
        for(int i = 0;i < n; i++) ans += abs((int)pow(chronos,i)-arr[i]);
    }
    else for(int i = 0;i < n; i++) ans += abs(1-arr[i]);
    
    cout << ans << endl;
    return 0;
}


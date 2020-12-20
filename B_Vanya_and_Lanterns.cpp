#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n,l;
    cin >> n >> l;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    sort (arr,arr+n);
    double ans = 0;
    double rad[n+2];
    rad[0] = arr[0];
    rad[n] = l - arr[n-1];
    ans = max(rad[0],rad[n]);
    for(int i=0; i<n; i++){
        if(i>0){
            rad[i] = (double) (arr[i] - arr[i-1]) / 2.0;
            if(rad[i] > ans) ans = rad[i];
        }
    }
    printf("%.10f", ans);
    return 0;
}


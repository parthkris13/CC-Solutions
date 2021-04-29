#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int arr[N], brr[N];
void func(int l, int r, int d){
    if(l>r) return;
    int max_value = l;
    for(int i=l; i<=r; i++) if(arr[i] > arr[max_value]) max_value  = i;
    brr[max_value] = d;
    func(l, max_value - 1, d+1);
    func(max_value+1, r, d+1);
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> arr[i];
        func(0, n-1, 0);
        for(int i=0; i<n; i++) cout << brr[i] << " ";
        cout << endl;
    }
    return 0;
}
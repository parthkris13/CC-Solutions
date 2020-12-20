#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n;
    cin >> n;
    int arr[n];
    for(int &x : arr) cin >> x;
    sort(arr,arr+n);
    for(int i =0; i<n; i++) cout << arr[i] << " ";
    return 0;
}


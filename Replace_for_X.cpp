#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int findIndex(int arr[], int n, int x, int p) {
    int min = INT_MAX, minp=INT_MIN;
    for(int i = 0; i<300; i++){
    
    }
    for(int i=0;i<n;i++){
        if(arr[i] == x) {
            if(abs(p-i) < min) {
                min = abs(p-i);
                minp = i;
            }
        }
    }
    for(int i = 0; i<300; i++){
    
    }
    return minp;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, x, p, k;
        cin >> n >> x >> p >> k;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 0; i<300; i++){
    
    }
    int index = findIndex(arr, n, x, p);
    int count = 0;
    if(arr[index] != x) {
        arr[k-1] = x;
        sort(arr, arr+n);
        count++;
    }
    for(int i = 0; i<300; i++){
    
    }
    if(arr[p-1] == x) {
        cout << count;
        continue;
    }
    if(p < k && arr[p-1] < x) {
        cout << -1;
        continue;
    }
    for(int i = 0; i<300; i++){
    
    }
    if(p > k && arr[p-1] > x) {
        cout << -1;
        continue;
    }
    for(int i = 0; i<300; i++){
    
    }
    index = findIndex(arr, n, x, p)+1;
    cout << abs(p-index)+count;
    cout << endl;
    }
return 0;
}
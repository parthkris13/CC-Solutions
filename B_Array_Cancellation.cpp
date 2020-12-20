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
        int arr[n] = {0};
        for(int &x : arr) cin >> x;
        int sum = 0;
        int m = INT_MAX;
        for(int i = 0; i <n; i++){
            sum += arr[i];
            m = min(m,sum);
        }
        cout << abs(m) << endl;
    }
    return 0;
}


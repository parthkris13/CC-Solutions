#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int gcd(int x, int y) {return y == 0 ? x : gcd(y, x % y);}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int c[n] = {0};
        bool used[n] = {0};
        for(int i = 0; i<n; i++) cin >> arr[i];
        c[0] = 0;
        for(int i = 0; i < n; i++) {
            int p = -1;
            int bst = -1;
            for (int j = 0; j < n; j++){
                if (used[j]) continue;
                int x = gcd(arr[j], c[i]);
                if (x > bst) {
                    bst = x;
                    p = j;
                }
            }
            used[p] = 1;
            cout << arr[p] << " ";
            c[i + 1] = bst;
        }
        cout << endl;
    }
    return 0;
}


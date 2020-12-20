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
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        if(n==1) cout << arr[0]/k + 1 << endl;
        else {
            int tot = 0, d=0, p = 0;
            for(int i = 0; i<n; i++){
                d++;
                if(arr[i]+tot < k){
                    cout << d << endl;
                    p = 1;
                    break;
                }
                tot = (arr[i] + tot) - k;
            }
            if(p==0){
                d += tot/k;
                cout << d+1 << endl;
            }
        }
    }
    return 0;
}
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
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        int p = 2;
        for(int i = 0;i < n; i++){
            p = 2;
            while(p<=arr[i]&&p<=1e9) p*=2;
            if(abs(p-arr[i])>abs((p/2)-arr[i])||p>1e9)cout << p/2 << " ";
            else cout << p << " ";
        }
        cout << endl;
    }
    return 0;
}
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
        int n,m;
        cin >> n >> m;
        int arr[m];
        for(int i=0; i<m; i++) cin >> arr[i];
        int gcd = arr[0];
        int result = 1;
        for(int i = 1; i<m; i++) gcd = __gcd(arr[i],gcd);
        for(int i = 1; i*i<=gcd; i++){
            if(gcd%i==0){
                if(i<=n) result = max(result,i);
                if(gcd/i<=n) result = max(result,gcd/i);
            }
        }
        if(n==1) cout << 0 << endl;
        else cout << n - result << endl; 
        
        
    }
    return 0;
}
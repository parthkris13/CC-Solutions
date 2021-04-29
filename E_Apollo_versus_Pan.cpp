#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 1e9 + 7;
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n+1];
        int count[65] = {0};
        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            arr[i] = x;
            for(int j=0; j<61; j++) if((1ll<<j)&arr[i]) count[j]++;
        }
        int ans = 0;
        for(int i=1;i<=n;i++){
            int p=0,q=0;
            for(int j=0;j<=60;j++){
                int x=(1ll<<j)%N;
                if((1ll<<j)&arr[i]){
                    p=(p+x*n)%N;
                    q=(q+x*count[j])%N;
                }
                else p=(p+x*count[j])%N;
            }
            ans=(ans+p*q)%N;
        }
        cout<<ans<<endl;
    }
    return 0;
}
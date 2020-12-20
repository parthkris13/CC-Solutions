#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int ans=0;
        for(int i=0; i<n; i++){
            int a,b;
            cin >> a >> b;
            if(a<=2){
                ans+=(b*(b+1)/2);
                ans-=(a-1);
            }
            else{
                ans+=(b*(b+1)/2);
                ans-=(a*(a-1)/2);

            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
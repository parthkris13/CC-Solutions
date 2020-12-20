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
        int n,k = 2;
        cin >> n;
        int arr[n+1];
        for(int i=1; i<=n; i++) cin >> arr[i];
        int sum = 0;
        for(int i = 1; i<=n; i++) sum+=arr[i];
        int ans = INT64_MAX ;
        for(int i = 1; i <= sqrt(sum); i++){
            int k = sum/i;
            int flag = 0;
            int parth;
            if(sum%i==0){
                parth = 0;
                for(int j = 1; j <=n; j++){
                    parth += arr[j];
                    if(parth>i){
                        flag=1;
                        break;
                    }
                    if(parth==i) parth=0;
                }
                if(parth!=0 && parth<i) flag=1;
                if(!flag) ans = min(ans,n-k);
                flag=0;
                parth=0;
                for(int j = 1;j <=n; j++){
                    parth+= arr[j];
                    if(parth>k){
                        flag=1; 
                        break;
                    }
                    if(parth==k) parth=0;
                }
                if(parth!=0 && parth<k) flag=1;
                if(!flag) ans = min(ans,n-i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
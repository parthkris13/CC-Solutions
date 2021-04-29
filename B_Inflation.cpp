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
        int inflation[n];
        int price[n] = {0};
        for(int i=0; i<n; i++){
            cin >> inflation[i];
        }
        price[0] = inflation[0];
        for(int i=1; i<n; i++) price[i] = price[i-1]+inflation[i];
        // for(int i=0; i<n; i++) cout << inflation[i] << " ";
        // cout << endl;
        // for(int i=0; i<n; i++) cout << price[i] << " ";
        // cout << endl;
        int ans = 0;
        for(int i = 1; i<n; i++){
            price[i-1]+=ans;
            float rate = (float)inflation[i]/(float)price[i-1];
            float limit = (float)k/(float)100; 
            // cout << rate << " " << limit << endl;
            //cout << price[i-1] << endl;
            if(rate<=limit) continue;
            else{
                int parth = inflation[i]*100;
                
                //cout << ans << " " << price[i-1] << endl;
                
                if(parth%k==0) ans+=((parth/k)-price[i-1]);
                else{
                    int rem = parth%k;
                    parth+=(k-rem);
                    ans+=((parth/k)-price[i-1]);
                }
                //cout << ans << endl;
            }
            

        }

        
        cout << ans<< endl;
    }
    return 0;
}
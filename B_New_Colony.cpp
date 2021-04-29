#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int height[105];
int n,k;
int dorime(){
    for(int i = 0;i < n-1; i++) if(height[i+1] > height[i]) return 0;
    return 1;
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int ans=-1;
        cin >> n >> k;
        for(int i=0; i<n; i++) cin >> height[i];
        while(dorime()==0 && k>0){
            for(int i = 0;i < n-1; i++){
                if(height[i+1] > height[i]){
                    
                    if(k==1) ans = i+1;
                    height[i]++;
                    break;
                }
            }
            k--;
        }
        cout << ans;
        
        cout << endl;
    }
    return 0;
}
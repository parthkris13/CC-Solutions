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
        int ans=0;
        int p,q;
        int flag =0;
        for(int i = 0; i<n; i++){
            if(arr[i] == 1){
                p = i;
                flag = 1;
                break;
            }
        }
        if(flag==1){
            for(int i = n-1; i>=0; i--){
            if(arr[i] == 1){
                q = i;
                break;
            }
        }
        //cout << p << " " << q << endl;
        for(int i = p+1; i<q; i++) if(arr[i]==0) ans++;
        cout << ans << endl;
        }
        else cout << 0 << endl;
        
        
    }
    return 0;
}
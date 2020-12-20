#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n,p;
        cin >> n >> p;
        //cout << "chronos" << endl;
        int arr[n];
        int ans = 0;
        for(int i =n-1; i>=0; i--){
            arr[i] = p%10;
           // cout << arr[i] << " ";
            p/=10;
        }
        for(int i = 0; i<n; i++){
            int sum = 0;
            int count = 1;
            for(int j=i; j<n; j++){
                sum+=arr[j];
                if(sum == count) ans++;
                else if (sum > count+1) break;
                count++;
            }
        }
        cout << ans << endl;

        

    }
    return 0;    
}


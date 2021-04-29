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
        int sum = 0;
        int o=0, t=0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum+=arr[i];
            if(arr[i] == 1) o++;
            else t++;
        }
        
        if(n%2==0 && sum%2==0) cout << "YES"<< endl;
        else if(n%2!=0 && sum%2==0 && o>0) cout << "YES"<< endl;
        else cout << "NO"<< endl;
    }
    return 0;
}
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
        vector<int> arr(n);
        map<int,int> M;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            M[arr[i]]++;
        }
        int ans = 0;
        for(int  i = 0; i<n; i++){
            
            int x=0;
            x=M[arr[i]-2]+M[arr[i]-1]+M[arr[i]]-1;
            ans+=(x*(x-1))/2;
        
            x=M[arr[i]-1]+M[arr[i]]+M[arr[i]+1]-1;
            ans+=(x*(x-1))/2;
        
            x=M[arr[i]+2]+M[arr[i]+1]+M[arr[i]]-1;
            ans+=(x*(x-1))/2;
            
            x=M[arr[i]-1]+M[arr[i]]-1;
            ans-=(x*(x-1))/2;
        
            x=M[arr[i]+1]+M[arr[i]]-1;
            ans-=(x*(x-1))/2;
        
            M[arr[i]]--;
        }
        cout << ans << endl;
    }
    return 0;
}
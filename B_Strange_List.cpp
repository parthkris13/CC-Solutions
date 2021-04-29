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
        int n,x;
        cin >> n >> x;
        //cout << "pks" << endl;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        int sum=0;
        for(int i=0; i<n; i++) sum+=arr[i];
        int parth = INT_MAX;
        int count = 0;
        
        for(int i=0; i<n; i++){
            int pks = arr[i];
            int p=0;
            while(pks%x==0){
                p++;
                pks/=x;
            }
            if(p<parth){
                count = i;
                parth = p;
            }
        }
        int result = ((parth+1)*sum);
        for(int i=0; i<count; i++) result+=arr[i];

        cout << result << endl;
        

        
        
    }
    return 0;
}
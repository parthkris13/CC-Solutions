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
        int p1=0, p2=0;
        for(int i=0; i<n; i++) sum+=arr[i];
        if(sum%x==0) p1 = sum/x;
        else p1 = ((sum/x) + 1);
        for(int i=0; i<n; i++){
            if(arr[i]%x!=0) p2+=((arr[i]/x)+1);
            else p2+=(arr[i]/x);
        }

        
        cout << p1 << " " << p2 << endl;
    }
    return 0;
}
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
        for(int i=0; i<n; i++) cin >> arr[i];
        int brr[n];
        for(int i=0; i<n; i++) cin >> brr[i];
        int sum=0;
        for(int i = 0; i<n; i++){
            int p = arr[i]*brr[i];
            sum+=p;
        }
        if(sum!=0) cout << "No" ;
        else cout << "Yes";
        
        cout << endl;
    }
    return 0;
}
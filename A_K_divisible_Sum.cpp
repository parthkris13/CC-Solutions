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
        int p;
        cin >> n >> k;
        if(n==1) cout << k;
        else if(n==k) cout << 1;
        else if(n<k){
            if(k%n==0)p = k/n;
            else p = (k/n)+1;
            cout << p;

        }
        else {
            int rem = n%k;
            int pks = n;
            if(rem!=0) pks = n + (k-rem);
            
            //cout << pks << endl;
            if(pks%n==0) p = (pks/n);
            else p = (pks/n)+1;
            cout << p;
        }
        
        
        cout << endl;
    }
    return 0;
}
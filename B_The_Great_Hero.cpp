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
        int A,B,n;
        cin >> A >> B >> n;
        int power[n];
        for(int i=0; i<n; i++) cin >> power[i];
        int health[n];
        int killed = 0;
        int dorime = 0;
        for(int i=0; i<n; i++) cin >> health[i];     
        for(int i=0; i<n; i++){
            int req = health[i]/A;
            if(health[i]%A != 0) req+=1;
            dorime+=(req)*power[i];
            
        }
        int pks[n];
        for(int i=0; i<n; i++) pks[i] = power[i];
        sort(pks,pks+n);
        int parth = pks[n-1];

        if(B-dorime+parth <1) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}
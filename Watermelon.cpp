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
        int n;
        cin >> n;
        int sum = 0 , x;
        for(int i = 0; i<n; i++){
            cin >> x;
            sum += x;
        }
        if(sum >= 0) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    

}
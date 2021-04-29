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
        cin >> n >> k;
        if(n%2==0) cout << 1+(k-1)%n;
        else{
            k--;
            cout << (k + k/(n/2)) % n + 1;
            
            



            

        }
        cout << endl;
    }
    return 0;
}
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
        if(n==1) cout << 0;
        else if(n==2) cout << 1;
        else if(n==3) cout << 2;
        else{
            if(n%2==0) cout << 2;
            else cout << 3;
        }
        
        cout << endl;
    }
    return 0;
}
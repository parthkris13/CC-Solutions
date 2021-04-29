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
        if(n<4041) cout << "NO" << endl;
        else{
            int p = n/2020;
            int flag = 0;
            for(int i = 0; i<=p; i++){
                int pks = n - i*2020;
                if(pks%2021==0){
                    flag = 1;
                    break;
                }
            }
            if(flag==1) cout << "YES"<< endl;
            else cout << "NO" << endl;
        }
        
    
    }
    return 0;
}
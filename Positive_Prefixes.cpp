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
        int p = n-k;
        int j = 0;
        for(int i = 1; i<=n; i++){
            int x = i;
            if(i%2==0 && p>0){
                x*=(-1);
                p--;
                cout << x << " ";
            }
            else if(i%2==1 && p>0 && j<k){
                cout << x << " ";
                j++;
            }
            else if(p==0 && j<k){
                cout << x << " ";
                j++;
            }
            else if(j==k){
                x*=(-1);
                cout << x << " ";
            }
        }        
        
        cout << endl;
    }
    return 0;
}
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int pks(int x){
    if((x!=0) && ((x&(x-1))==0)) return 1;
    else return 0; 
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1) cout << 1 << endl;
        else if(n==3) cout << 1 << " " << 3  << " " << 2 << endl;
        else if(n==5)  cout << 2 << " " << 3 << " " << 1 << " " << 5 << " " << 4 << endl;
        else if(pks(n)) cout << -1 << endl;
        else {
            cout << 2 << " " << 3 << " " << 1 << " " << 5 << " " << 4 << endl;
            int p = 6;
            while(p<=n){
                if(pks(p)){
                    cout << p+1 << " " << p << " ";
                    p+=2;
                }
                else{
                    cout << p << " ";
                    p++;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
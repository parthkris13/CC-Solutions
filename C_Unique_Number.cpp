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
        set<int> pks;
        cin >> n;
        int parth = 9;
        if(n>45) cout << -1 << endl;
        else{
            while(n>0){
                if(n>=parth){
                    pks.insert(parth);
                    n-=parth;
                    parth--;
                }
                else{
                    pks.insert(n);
                    n = 0;
                }
            }
            for(auto iterator : pks) cout << iterator;
            cout << endl;
        }
    }
    return 0;
}
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int chronos[1001];
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        chronos[0] = 1;
        chronos[1] = 4;
        chronos[2] = 4;
        chronos[3] = 12;
        chronos[4] = 9;
        if(n==1 || n==2) cout << 4;
        else{
            int pks = 12, count = 0, parth = 2;
            for(int i = 5; i<n+1; i++){
                parth = 2;
                chronos[i] = 0;
                if(i%2==1) chronos[i] = chronos[i-2];
                else chronos[i] = chronos[i-4];
                if(count<2){
                    count+=1;
                    chronos[i] += pks;
                    if(count==2){
                        pks+=4;
                        count=0;
                    }
                }
            }
            cout << chronos[n];
        }
        cout << endl;
    }
    return 0;
}
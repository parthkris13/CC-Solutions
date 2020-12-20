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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int &x : arr) cin >> x;
        int tables=1;
        int fights = 1;
        int curr = 1;
        set <int> pks;
        for(int i=0; i<n; i++){
            int p = pks.size();
            pks.insert(arr[i]);
            if(pks.size() == p+1) continue;
            else{
                curr++;
                if(curr > k ){
                    tables++;
                    curr=1;
                    //fights +=2;
                    pks.clear();
                    pks.insert(arr[i]);
                }
                else{
                    fights++;
                }
            }
        }
        cout << k*tables + ((fights==1)?0:fights) << endl;

    }
    return 0;
    
}


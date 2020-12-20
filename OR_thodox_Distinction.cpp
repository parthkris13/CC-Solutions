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
        int arr[n];
        for(int i = 0; i<n; i++) cin >> arr[i];
        int r = (n*(n+1))/2;
        int k = 0;
        int flag =0;
        int par[r]={0};
        for(int i=0; i<r; i++){
            cout << par[i] << " ";
        }
        cout << endl;
        for(int i = 0; i<n; i++){
           // int x = arr[i];
            for(int j = i; j<n; j++){
                for(int l = i; l <= j; l++){
                    par[k] = par[k] | arr[l];
                }
                k++;
            }
        }
        sort(par, par+r);
        for(int i=0; i<r; i++){
            cout << par[i] << " ";
        }
        cout << endl;
        for(int i =0; i<r; i++){
            if(par[i] == par[i-1]){
                flag = 1;
                break;
            }
        }


        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}


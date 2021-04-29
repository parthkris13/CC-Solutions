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
        int k;
        cin >> k;
        int p = (n-1)/2;
        if(k > p) cout << -1 << endl;
        else{
            int kk = k;
            int i = 1;
            int j = n;
            while(k--){
                cout << i << " ";
                cout << j << " ";
                i++;
                j--;
            }
            while(i<=j){
                cout << i << " ";
                i++;
            }
            cout << endl;

        }

       
        

    }
    return 0;
}


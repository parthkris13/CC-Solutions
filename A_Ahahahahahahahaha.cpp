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
        int one = 0, zero = 0;
        int arr[n];
        for(int i = 0; i<n; i++){
            int x;
            cin >> x;
            arr[i] = x;
            if(x == 1) one++;
            else zero++;
        }
        //cout << one << " " << zero << endl;
        if(zero >= n/2){
            cout << (n/2) << endl;
            for(int i = 0; i<(n/2); i++) cout << 0 << " ";
        }
        else{
            if(one & 1){
                cout << one - 1  << endl;
                for(int i = 0; i< one - 1; i++) cout << 1 << " ";
            }
            else{
                cout << one << endl;
                for(int i = 0; i<one; i++) cout << 1 << " ";
            }
        }
        cout << endl;
        
    }
    return 0;
}


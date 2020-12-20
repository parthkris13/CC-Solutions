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
        int arr[2*n];
        for(int i=0; i<2*n; i++) cin >> arr[i];
        int count[n]={0};

        for(int i=0; i<2*n; i++){
            if(count[arr[i]-1]==0){
                cout << arr[i] << " ";
                count[arr[i]-1] = 1;
            }
        }
        cout << endl;
    }
    return 0;
}


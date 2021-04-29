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
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        set<int> pks;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                pks.insert(abs(arr[i]-arr[j]));
            }
        }
        cout << pks.size()-1 << endl;
    }
    return 0;
}
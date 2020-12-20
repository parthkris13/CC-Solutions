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
        int lock[n];
        for(int &x: arr) cin >> x;
        vector<int> pig;
        for(int i = 0; i <n; i++){
            int x;
            cin >> x;
            lock[i] = x;
            if(!x) pig.push_back(arr[i]);
        }
        sort(pig.begin(), pig.end());
        int j = 0;
        vector <int> ans;
        for(int i=0; i<n; i++){
            if(lock[i] == 0 && arr[i] >= 0) 
        }
        for(int i=0; i<n; i++) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;

}
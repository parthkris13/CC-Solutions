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
        vector<pair<pair<int,int>,int>> pks;
        for(int i=0; i<n; i++){
            int a,b;
            cin >> a >> b;
            pks.push_back(make_pair(make_pair(a,b), i+1));
        }
        int ans[n]={0};
        for(int i=0; i<n; i++) ans[i] = -1;
        
        
        cout << endl;
    }
    return 0;
}
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
        int n,k;
        cin >> n >>k;
        vector<pair<int,int>> parth;
        for(int i = 0; i<n; i++){
            int x,y;
            cin >> x >> y;
            parth.push_back(make_pair(x,y));
        }
        sort(parth.begin(), parth.end());
        int flag = -1;
        int p;
        for(int i = 0;i < n; i++){
            int count = 0;
            for(int j = 0;j < n; j++){
                p = abs(parth[i].first-parth[j].first)+abs(parth[i].second-parth[j].second);
                if(p<=k) count++;
            }
            if(count==n){
                flag = true;
                break;
            }
        }
        

        
        cout << flag << endl;
    }
    return 0;
}
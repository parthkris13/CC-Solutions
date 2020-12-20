#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> parth;
        for(int i=0; i<n; i++){
            int x,y;
            cin >> x >> y;
            parth.push_back(make_pair(x,y));
        }
        sort(parth.begin(), parth.end());
        float p;
        for(auto i : parth){
            int x = i.first;
            int y = i.second;
            p = y/x;
            for(auto j : parth){
                int count = 0;
                if(j.first == x && j.second == y) continue;
                else{
                    int t = (j.second - y)/(j.first - x)
                }
            }

        
        }
        cout << endl;
    }
    return 0;
}
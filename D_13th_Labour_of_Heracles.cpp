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
        int wt[n];
        for(int i=0; i<n; i++) cin >> wt[i];
        int sum = 0;
        for(int i =0; i<n; i++) sum+=wt[i];
        vector<int> v;
        int deg[n] = {0};
        for(int i=0; i<n-1; i++){
            int a,b;
            cin >> a >> b;
            a--;
            b--;
            deg[a]++;
            deg[b]++;
            if(deg[a] > 1) v.push_back(wt[a]);
            if(deg[b] > 1) v.push_back(wt[b]);
        }
        sort(v.begin(), v.end(), greater<int>());
        vector<int> ans;
        ans.push_back(sum);
        for(auto it: v){
            sum+=it;
            ans.push_back(sum);
        }
        for(auto it: ans){
            cout << it << " ";
        }


        
        cout << endl;
    }
    return 0;
}
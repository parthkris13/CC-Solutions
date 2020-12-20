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
        int n,w;
        cin >> n >> w;
        vector<pair<int,int>> v(n);
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            v[i].first = x;
            v[i].second = i+1;
        }
        sort(v.begin(), v.end());
        int p = (w+1)/2;
        int ans = 0;
        int sum;
        int flag = 0;
        vector<int> pks;
        for(int i = n-1; i>=0; i--){
            if(v[i].first>w) continue;
            else if(v[i].first>=p && v[i].first<=w){
                flag = 1;
                pks.push_back(v[i].second);
                break;
            }
            else{
                sum = v[i].first;
                pks.push_back(v[i].second);
                i--;
                while(i>=0 && !(sum>=p&&sum<=w)){
                    sum+=v[i].first;
                    pks.push_back(v[i].second);
                    i--;
                }
                if(sum>=p&&sum<=w){
                    flag = 1;
                    break;
                }
         
            }
        }
        if(flag==0) cout << "-1" << endl;
        else{
            cout << pks.size() << endl;
            sort(pks.begin(), pks.end());
            for(int i = 0; i<pks.size(); i++) cout << pks[i] << " ";
            cout << endl;
        }
        
    }
    return 0;
}
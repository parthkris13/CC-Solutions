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
        vector<pair<int,int>> v(n);
        for(int i = 0; i < n;i++) {
            cin >> v[i].first;
            v[i].second = i + 1;
        }
        sort(v.begin(), v.end());
        int lo = 0;
        int hi = n - 1;
        while(lo < hi) {
            int mid = (lo + hi) >> 1;
            int sum = v[mid].first;
            int can_win = 1;
            for(int i = 0;i < n;i ++ ) {
                if(v[i].first > sum) {
                    can_win = 0;
                    break;
                }
                if(i == mid) continue;
                sum += v[i].first;
            }
            if(can_win) hi = mid;
            else lo = mid + 1;
        }
        vector<int> ans;
        for(int i = lo ;i < n;i++) ans.push_back(v[i].second);
        cout << ans.size() << endl;
        sort(ans.begin(), ans.end());
        for(int i = 0;i < ans.size();i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
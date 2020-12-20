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
        vector<pair<int,int>> pks(n);
        for(int i = 0;i < n; i++) cin >> pks[i].first;
        for(int i = 0;i < n; i++) cin >> pks[i].second;
        sort(pks.begin(),pks.end());
        int p = pks.size();
        for(int i = 0;i < p; i++) arr[i] = pks[i].second;
        for(int i = n-2;i >= 0; i--) arr[i] = (arr[i] + arr[i+1]);
        int ans = arr[0];
        for(int i = 0;i < pks.size(); i++){
            if(i>= n-1) ans = min(ans,pks[i].first);
            else ans = min(ans,pks[i].first+(max(pks[i].first,arr[i+1])-pks[i].first));
        }
        cout << ans << endl;
    }
    return 0;
}
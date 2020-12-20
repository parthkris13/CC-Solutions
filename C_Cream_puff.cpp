#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 1; i*i<=n; i++){
        if(n%i==0){
            ans.push_back(i);
            if(i!=n/i) ans.push_back(n/i);
        }
    }
    sort(ans.begin(), ans.end());
    for(int it : ans) cout << it << endl;
    return 0;
}
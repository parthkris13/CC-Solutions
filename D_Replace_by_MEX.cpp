#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 1e3 + 500;
int n;
int arr[N];
bool vis[N];
int get(){
    for(int i = 0; i<=n; i++) vis[i] = 0;
    for(int i=0; i<n; i++) vis[arr[i]] = 1;
    for(int i=0; i<=n; i++) if(!vis[i]) return i;
}
bool check(){
    for(int i=1;i<n;i++) if(arr[i] < arr[i-1]) return 0;
    return 1;
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++) cin >> arr[i];
        int p = n;       
        vector<int> v;
        while(!check()){
            int curMex = get();
            if(p==curMex){
                arr[--p] = curMex;
                v.push_back(p);
            }
            else{
                arr[curMex] = curMex;
                v.push_back(curMex);
            }
        }
        cout << v.size() << endl;
        for(auto &it : v) cout << it+1 << " ";
        cout << endl;
    }
    return 0;
}


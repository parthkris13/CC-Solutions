/*She smiles, I cry.
She is outgoing, I am shy.
She loves, I am alone.
She is amazing, I am unknown.
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
int32_t main(){
    IOS;
    int n, m;
    cin >> n >> m;
    priority_queue <int> q;
    int p;
    int ans = 0;
    for(int i=0; i<n; i++){
        cin >> p;
        q.push(p);
    }
    for(int i = 0; i<m; i++){
        p = q.top();
        q.pop();
        q.push(p/2);
    }
    while(!q.empty()){
        p = q.top();
        ans += p;
        q.pop();
    }
    cout << ans << endl;
    return 0;
}


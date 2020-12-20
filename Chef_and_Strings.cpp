#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define db long double
#define x first
#define y second
#define mp make_pair
#define pb push_back
#define all(a) a.begin(), a.end()
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans=0;
        int start;
        cin >> start;
        for(int i=0; i<n-1; i++){
            int t;
            cin >> t;
            ans+= abs(t-start) - 1;
            start = t;
        }
        cout << ans << endl;
    }
    return 0;
}


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define db long double
#define x first
#define y second
#define mp make_pair
#define pb push_back
#define all(a) a.begin(), a.end()
int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,ans;
        cin >> n;
        if(n%2==0) ans = n/2;
        else ans = n/2 + 1;
        cout << ans << endl;
    }
    return 0;
}


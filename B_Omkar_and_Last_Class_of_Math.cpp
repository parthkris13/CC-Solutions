#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p=-1;
	    for(int i=2; i*i<=n && p<0; i++) if(n%i==0) p=i;
	    if(p<0) p=n;
        cout << n/p << " " << n-n/p << endl;
    }
    return 0;
}


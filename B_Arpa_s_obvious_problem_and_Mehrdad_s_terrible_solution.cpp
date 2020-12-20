#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n,x,a,v[200005],ans=0;
    cin >> n >> x;
	while(n--){
		cin>>a;
      //  cout << (x^a) << endl;
		ans += v[x^a];
		v[a]++;
	}
	cout<<ans;
}


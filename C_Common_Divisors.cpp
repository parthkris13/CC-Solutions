#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n;
    cin>>n;
	int a,g=0,ans=0;
	for(int i=0;i<n;i++) cin>>a,g = __gcd(g,a);
	for(int i=1;i<=sqrtl(g);i++){
		if(g%i==0) ans++;
		if(g%i==0 && g/i!=i) ans++;
	}
	cout<<ans<<endl;
    return 0;
}


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int sum(int a){
	int ans=0;
	while(a>0){
		ans+=a%10;
		a/=10;
	}
	return ans;
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
		int d=10,buf=n;
		while(sum(n)>s){
			n+=d-n%d;
			d*=10;
		}
		cout << n-buf << endl;
    }
    return 0;
}


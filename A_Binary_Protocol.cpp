#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    string s;
	int n;
	cin >> n >> s;
	int ans=0;
	int p=0;
	for(int i=0; i<s.length(); i++) {
		if(s[i]=='0'){
			ans = ans*10 + p;
			p=0;
		}
		else p++;
	}
	ans = (ans*10) + p;
	cout << ans << endl;
}


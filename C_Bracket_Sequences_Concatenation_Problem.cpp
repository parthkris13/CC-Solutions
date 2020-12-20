#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
string s[N];
char buf[N];
int cnt[N] = {0};
int n;
int getBalance(string &s){
	int bal = 0;
	for(int i = 0; i < s.size(); ++i){
       // cout << "pks1" << endl; 
		if(s[i] == '(') ++bal;
		else --bal;
		if(bal < 0) return -1;
	}
	return bal;
}
string rev(string &s){
	string revs = s;
	reverse(revs.begin(), revs.end());
	for(int i = 0; i < revs.size(); ++i)
		if(revs[i] == '(') revs[i] = ')';
		else revs[i] = '(';
	return revs;
}
int32_t main(){
    IOS;
    cin >> n;
    for(int i=0; i<n;i++){
        cin >> buf;
        s[i] = buf;
       // cout << s[i] << endl;
    }
    for(int i = 0; i < n; ++i){
		int bal = getBalance(s[i]);
		if(bal != -1) ++cnt[bal];
       // cout << bal << " " << cnt[bal]<<endl;
	}
    int ans=0;
    for(int i = 0; i < n; ++i){
		s[i] = rev(s[i]);
		int bal = getBalance(s[i]);
		if(bal != -1) ans += cnt[bal];
	}
    cout << ans << endl;
    return 0;
}


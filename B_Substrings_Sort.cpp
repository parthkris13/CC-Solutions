#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
bool cmp(string &a, string &b){
	return a.length() < b.length();
}
int32_t main(){
    IOS;
    int n; 
    cin>>n;
    vector <string> v(n);
    for(string &s: v) cin >> s;
    sort(v.begin(), v.end(),cmp);
    for(int i=1; i<n; i++){
        if (v[i].find(v[i-1]) == string::npos){
			cout << "NO" << endl;
			return 0;
		}  
    }
    cout << "YES "<< endl;
    for(auto p: v) cout << p << endl;
    return 0;
}


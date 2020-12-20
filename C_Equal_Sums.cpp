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
    int k;
	cin >> k;
	int n;
	vector<vector<int>> v;
	vector<int> vv;
	for(int i=0;i<k;i++){
		cin >> n;
		vv.resize(n);
		int sum = 0;
		for(auto &it:vv){
			cin >> it;
			sum+=it;
		}
		if(vv.size() == 0) continue;
		for(int j=0;j<n;j++) v.push_back({sum-vv[j],i+1,j+1});
		
	}
	sort(v.begin(), v.end());
	for(int i=1;i<v.size();i++){
		if (v[i][0] == v[i-1][0] && v[i][1] != v[i-1][1]){
			cout << "YES" << endl;
			cout << v[i][1] << " " << v[i][2] << endl;
			cout << v[i-1][1] << " " << v[i-1][2] << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}


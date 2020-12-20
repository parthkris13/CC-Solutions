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
	cin >> n;
	vector<long long> v(n);
	for(auto &it:v)
		cin >> it;
	
	vector<int> sol(1,v[0]);
	sort(v.begin(), v.end());
	// check for pair
	for(int i=0;i<n;i++){
		long long t = 1;
		while(v[i] + t <= v.back()){
			if(binary_search(v.begin(), v.end(), t+v[i])){
				sol = {v[i],t + v[i]};
				break;
			}
			t*=2;
		}
		if(sol.size() == 2)
			break;
	}
 
	// check for triad
	for(int i=0;i<n;i++){
		int s=0;
		long long t = 1;
		while(v[i] + t*2 <= v.back()){
			if(binary_search(v.begin(), v.end(), t+v[i]) && binary_search(v.begin(), v.end(), 2*t + v[i])){
				sol = {v[i],t + v[i],2*t + v[i]};
				break;
			}
			t*=2;
		}
		if(sol.size() == 3)
			break;
	}
	cout << sol.size() << endl;
 
	for(auto i:sol)
		cout << i << " ";
	cout << endl;
	return 0;
}


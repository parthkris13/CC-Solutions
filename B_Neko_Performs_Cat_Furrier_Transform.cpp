#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool check(int p){
    p+=1;
    while(p%2 == 0) p/=2;
    return (p==1);
}
int MSB(int p){
    for (int i=20; i>=0; i--) if ((p >> i) & 1) return i;
	return -1;
}
int32_t main(){
    IOS;
    int x;
    cin >> x;
    int i=0;
    vector<int> ans;
    while(!check(x)){
        i++;
		if (i % 2 == 0) {x++; continue;}
		int r = MSB(x);
		if ((1 << r) != x) r++;
		x = (x ^ ((1 << r) - 1)); ans.push_back(r);
	}
	cout << i << endl;
	for (auto z: ans) cout << z << " "; cout << endl;
    return 0;
}


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int primes[11] = {2,3,5,7,11,13,17,19,23,29,31};
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		vector<int> colors(n,-1);
		vector<int> v(11,0);
		for(int i=0;i<n;i++){
			cin>>a[i];
			for(int j=0;j<11;j++){
				if(a[i]%primes[j] == 0){
					colors[i] = j;
					v[j] = 1;
					break;
				}
			}
		}
		
		int m = 0;
		vector<int> mp(11,-1);
		for(int j=0;j<11;j++){
			if(v[j]){
				++m;
				mp[j] = m;
			}
		}
 
		cout<<m<<endl;
		for(int i=0;i<n;i++)
			cout<<mp[colors[i]]<<" ";
		cout<<endl;
	}	
}


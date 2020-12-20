#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n,k;
	cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	cout << n << endl;
	for(int i=0; i<n; i++){
		k=i;
		for(int j=i; j<n; j++){
			if(a[j]< a[k])
			k=j;
		}
		cout<<i<<" "<<k<<endl;
		swap(a[i], a[k]);
	}
}


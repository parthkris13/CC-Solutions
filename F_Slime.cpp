#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n;
    cin>>n;
    int arr[n];
    vector <int> order;
	for (int i=1;i<=n;i++){
		cin>>arr[i];
		order.push_back(arr[i]);
	}
	if (n==1){
		cout<<arr[1]<<endl;
		return 0;
	}
	sort(order.begin(),order.end());
	long long res=0;
	for (int i=0;i<order.size();i++){
		if (i==0) res+=-order[i];
		else if (i+1==order.size()) res+=order[i];
		else res+=abs(order[i]);
	}
	cout<<res<<endl;
    return 0;    
}


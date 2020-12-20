#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n;
    cin>>n;
	int count = 0;
    int arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n);
    int p = 0;
    while(count < (n-1)/2){
        arr[p] = 0;
        p+=2;
        count++;
    }
    int ans=0;
    for(int i=0;i<n;i++) cout << arr[i]<< " ";
    cout<<endl;
    for(int i=0;i<n;i++) ans+=arr[i];
    cout << ans << endl;

    return 0;
}


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
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int ans[n];
    int i=0;
    for(int j=1;i<n && j<n;i++,j=j+2) ans[j]=arr[i];
    for(int j=0;i<n && j<n;i++,j=j+2) ans[j]=arr[i];
    cout<<(n-1)/2<<endl;
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
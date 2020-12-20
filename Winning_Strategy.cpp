#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int &x : arr) cin >> x;
        if(n==1 || n==2){
            cout << "first" << endl;
            continue;
        }
        sort(arr,arr+n,greater<int>());
        int p1=arr[0],p2=(arr[1]+arr[2]);
        for(int i=3;i<n;i+=2) p1+=arr[i];
        for(int i=4;i<n;i+=2) p2+=arr[i];
        if(p1>p2) cout << "first" << endl;
        else if(p1==p2) cout << "draw" << endl;
        else cout << "second" << endl;

        

    }
    return 0;    
}


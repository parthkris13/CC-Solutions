/*
 * 	Roses are red
 * 		Violets are blue
 * 			I cried
 * 				And so did you
 */
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int &x:arr) cin>>x;
        sort(arr,arr+n);
        if(n&1) cout << arr[(n/2)] <<  endl;
        else cout << arr[(n/2)-1] << endl;
    }    
    return 0;
}


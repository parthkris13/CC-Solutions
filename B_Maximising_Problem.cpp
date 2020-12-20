#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n; 
    cin>>n;
    int arr[n];
    for(int &x:arr) cin>>x;
    sort(arr,arr+n,greater<int>());
    int sum = 0;
    int lim = -1;
    for(int i = 0; i<n; i++){
        sum+=arr[i];
        if(sum <= 0){
            lim = i;
            break;
        }
    }
    if(lim == -1) lim = n;
    //cout << lim << endl;
    sum = 0;
    int time = lim;
    for(int i=0; i<lim; i++){
        sum+= time*arr[i];
        time--;
    }
    
        
    cout << sum << endl;
    return 0;
}


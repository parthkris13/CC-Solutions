#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n,m,k; 
    cin>>n>>m>>k;
    int arr[n];
    int ansr=0,ansl=0;
    for(int &x:arr) cin>>x;
    for(int i = m-2; i>=0; i--){
        if(arr[i] <= k && arr[i] > 0) break;
        else ansl+=10; 
    }
    for(int i = m; i<n;i++){
        if(arr[i] <= k && arr[i] > 0) break;
        else ansr+=10; 
    }
    //cout << ansl << " " << ansr << endl;
    if (ansr == 0) cout << ansl + 10 << endl;
    else if(ansl == 0) cout << ansr + 10 << endl;
    else cout << min(ansl,ansr) + 10 << endl;
    return 0;
}


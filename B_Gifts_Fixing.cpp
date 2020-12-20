#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        int flag = 0;
        cin>>n;
        int arr[n], brr[n];
        for(int &x:arr) cin>>x;
        for(int &x:brr) cin>>x;
        int moves = 0;
        int amin = *min_element(arr,arr+n);
        int bmin = *min_element(brr,brr+n);
        for(int i=0; i<n; i++){
            if(arr[i] == amin && brr[i] > bmin) moves += brr[i] - bmin;
            else if(brr[i] == bmin && arr[i] > amin) moves += arr[i]-amin;
            else if(arr[i] > amin && brr[i] > bmin){
                if((arr[i] - amin) >= (brr[i] - bmin)){
                    moves += brr[i] - bmin;
                    arr[i] -=  brr[i] - bmin;
                    moves += arr[i] - amin;
                }
                else{
                    moves += arr[i] - amin;
                    brr[i] -=  arr[i] - amin;
                    moves += brr[i] - bmin;
                }
            }
           // cout << moves << endl;
        }
        cout << moves << endl;
    }
    
    
    return 0;
}


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9+7;
int32_t main(){
    IOS;
    int n;
    cin >> n;
    int arr[n];
    for(int &x: arr) cin >> x;
    int array_sum = 0; 
    for (int i = 0; i < n; i++) array_sum = array_sum + arr[i]; 
    int array_sum_square = array_sum * array_sum; 
    int individual_square_sum = 0; 
    for (int i = 0; i < n; i++) individual_square_sum += arr[i]*arr[i]; 
    cout << ((array_sum_square - individual_square_sum)/2)%mod << endl;
 
 
     
    return 0;
}
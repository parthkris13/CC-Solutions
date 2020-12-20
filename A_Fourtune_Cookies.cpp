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
        int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        sort(arr,arr+4);
        if(arr[3] == arr[0] + arr[1] + arr[2]) cout << "Yes" << endl;
        else if(arr[3] + arr[0] == arr[1] + arr[2]) cout << "Yes" << endl;
        else cout << "No" << endl;



    }


    return 0;
}
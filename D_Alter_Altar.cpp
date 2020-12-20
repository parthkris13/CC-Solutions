#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int n;
    cin  >> n;
    int arr[n];
    int cr=0,cw=0;
    for(int i =0; i<n; i++){
        char c;
        cin >> c;
        if(c=='R') arr[i] = 0, cr++;
        else arr[i] = 1, cw++;
    }
    int count=0;
    for(int i =0; i<n; i++){
        if(arr[i] == 0 && i>= (n-cw)) count++; 
        else if(arr[i] == 1 && i < (n-cw)) count++;
    }
    if(count%2==0) cout << count/2 << endl;
    else cout << (count/2) + 1 << endl;

}


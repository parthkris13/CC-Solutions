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
    int count[n+1];
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr[i] = x;
        count[x]++; 
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        int p;
        cin >> c >> p;
        if(c == '+') count[p]++;
        else count[p]--;
        for(int i=1; i<n; i++){
            
            if(count[i] > 4) flag = 1;

        }
    }
    return 0;
}


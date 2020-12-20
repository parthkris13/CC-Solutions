#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int chronos(int val) {return (-1 + sqrt(1+4*val))/2;}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = ((n)*(n+1))/2;
        if(sum%2 != 0){
            cout << 0 << endl;
            continue;
        }
        int p = chronos(sum);
        if((p*(p+1))/2 == sum/2) cout << n-p + (p*(p-1))/2 + (((n-p)*(n-p-1))/2) << endl;
        else cout << n-p << endl;
        
    }
    return 0;
}


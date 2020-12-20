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
        cin >> n;
        cout << 2 << endl;
        stack<int> parth;
        for(int i = 1; i<=n; i++) parth.push(i);
        while(parth.size()>=2){
            int a = parth.top();
            parth.pop();
            int b = parth.top();
            parth.pop();
            int x = (a+b+1)/2;
            parth.push(x);
            cout << a << " " << b << endl;
        }

    
    }
    return 0;
}
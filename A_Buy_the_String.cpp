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
        int n,c0,c1,h;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        int a=0, b= 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '0') a++;
            else b++;
        }
        if(c0 >= c1+h){
            cout << (a+b)*c1 + a*h;
        }
        else if(c1 >= c0+h){
            cout << (a+b)*c0 + b*h;
        }
        else{
            cout << a*c0 + b*c1;
        }

        
        
        cout << endl;
    }
    return 0;
}
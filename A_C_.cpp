#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a,b,n, count=0;
        cin >> a >> b >> n;
        while(a<=n && b<=n){
            if(a>b) b+=a;
            else a+=b;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
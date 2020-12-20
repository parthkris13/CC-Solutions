#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int val,count=0;
        cin >> val;
        while(val%6 == 0){
            val /= 6;
            count++;
        }
        while(val%3 == 0){
            val /= 3;
            count+=2;
        }
        if(val == 1) cout << count << endl;
        else cout << "-1" << endl;   
    }
    return 0;
}
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
        int d,k;
        cin >> d >> k;
        int x=d/sqrt((double)2);
        x-=x%k;
        if((x+k)*(x+k)+x*x<=d*d) cout<<"Ashish";
        else cout<<"Utkarsh";
        
        cout << endl;
    }
    return 0;
}
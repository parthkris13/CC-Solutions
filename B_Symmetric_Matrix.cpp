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
        int n, m;
        cin >> n >> m;
        int flag = 0;
        int a,b,c,d;
        for(int i=0; i<n; i++){
            cin>>a>>b>>c>>d;
            if(a == b && b == c && c == d) flag=1;
            if(b == c) flag = 1;
        }
        if(m%2==1) cout<< "NO" << endl;
        else if(flag==1 && m%2 == 0 ) cout << "YES" << endl;
        else cout<<"NO"<<endl; 
    }
    return 0;
}
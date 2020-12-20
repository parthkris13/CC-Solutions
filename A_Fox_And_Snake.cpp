 #include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2==1) cout<<'#';
            else if(j==m&&i%4!=0) cout<<'#';
            else if(j==1&&i%4==0) cout<<'#';
            else cout<<'.';
        }
    cout<< endl;
    }
	return 0;
}    
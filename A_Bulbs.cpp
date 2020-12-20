#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n,m,x,y;
    cin >> n >> m;
    int count[m+1] = {0};
    while(n--){
        cin >> x;
        while(x--){
            cin >> y;
            count[y]++;
        }
    }
    int flag=1;
    for(int i = 1; i<=m; i++) if(count[i] == 0){
        cout << "NO" << endl;
        flag = 0;
        break;
    }
    if(flag) cout << "YES" << endl;    
    return 0;
}


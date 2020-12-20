#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    int a=x,b=y;
    for(int i = y; i<=n; i++) cout << x << " " << i << endl;
    for(int i = y-1; i>0; i--) cout << x << " " << i << endl; 
    a = x-1;
    b = 1;

    while(a){
        if(b==1) for(int i = 1; i<=n; i++){
            cout << a << " " << i << endl;
            b = i;
            if(b==n) a--; 
        }
        else if(b==n) for(int i = n; i>0; i--){
            cout << a << " " << i << endl;
            b = i;
            if(b==1) a--;
        }
    }
    a = x+1;
    while(a<=m){
        if(b==1) for(int i = 1; i<=n; i++){
            cout << a << " " << i << endl;
            b = i;
            if(b==n) a++; 
        }
        else if(b==n) for(int i = n; i>0; i--){
            cout << a << " " << i << endl;
            b = i;
            if(b==1) a++;
        }
    } 
    return 0;
    
}


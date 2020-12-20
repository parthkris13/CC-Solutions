#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,b,m,x;
        cin >>  n >> b >> m;
        int count =0,plast=-1;
        for(int i=0; i<m; i++){
            cin >> x;
            int p = x/b;
            if (x/b != plast) count++;
            plast = x/b;
        }    
        cout  << count << endl;
    }
    return 0;
}
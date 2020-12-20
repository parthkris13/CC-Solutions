#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int a,b,c;double f[105][105][105];
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        cin >> a >> b >> c;
        for(int i=99;~i;i--){
            for(int j=99;~j;j--){
                for(int k=99;~k;k--){
                    double sum=i+j+k;
                    f[i][j][k]=i/sum*f[i+1][j][k]+j/sum*f[i][j+1][k]+k/sum*f[i][j][k+1]+1;
                } 
            }
        }  
        printf("%.8f",f[a][b][c]);
    }
    return 0;
}
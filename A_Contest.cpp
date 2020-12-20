#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int score1 = 0, score2 = 0;
    score1 = a-a/250*c;
    if (score1<a*3/10) score1=a*3/10;
    score2=b-b/250*d;
    if (score2<b*3/10) score2=b*3/10;
    if (score1<score2) cout<<"Vasya"<<endl;
    else if (score1>score2) cout<<"Misha"<<endl;
    else cout<<"Tie"<<endl;
    return 0;
}
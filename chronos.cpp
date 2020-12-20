#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int m,p,q;
    cin >> m >> p >> q;
    int level1=0, level2=0;
    int z = 1;
    while(1){
    	z = pow(2,level1);
    	if(z > p) break;
    	level1++;
    }
    z = 1;
    while(1){
    	z = pow(2,level2);
    	if(z > q) break;
    	level2++;
    }
    //cout << z << endl;
    int vertical = abs(level1-level2);
    if(level1 < level2){
    	swap(level1,level2);
    	swap(p,q);
    }
    z = p;
    //Bcout << level1 << " " << level2 << endl;
    while(1){
    	if(z > pow(2,level2)-1) z/=2;
    	else break;
    }
    //cout << z << endl;
    int horizontal = abs(z - q);
    int hp = 0;
    z = 1;
    while(1){
    	z = pow(2,hp);
    	if(z > horizontal) break;
    	hp++;
    }
    //cout << hp << endl;
    int ans = m*(vertical + (2*hp));
    //cout << vertical << " " << horizontal << endl;
    cout << ans << endl;
}


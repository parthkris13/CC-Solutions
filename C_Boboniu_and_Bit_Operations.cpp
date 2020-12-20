#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int a[205], b[205];
int n,m;
 
bool solve(int c){
	int succ=1;
	for(int i=0;i<n;i++){
		int suc=0;
		for(int j=0;j<m;j++) if(((a[i]&b[j])|c) <= c){
			suc=1; break;
		}
		if(!suc) {succ=0; break;}
	}
	return succ;
}
int32_t main(){
	cin >> n >> m;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<m;i++) cin >> b[i];
	for(int c=0; c<(1<<9); c++)if(solve(c)){
			    cout << c << endl;
			    break;
		}
        return 0;
}


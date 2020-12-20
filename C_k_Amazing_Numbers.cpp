#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int last[n+1], maxx[n+1], dis[n+1];
		for (int i = 1; i <= n; i++){
			last[i]=0;
			maxx[i]=0;
			dis[i]=300001;
		}
		for (int i = 1; i <= n; i++){
            int x;
			cin >> x;
			maxx[x] = max(maxx[x],i-last[x]);
			last[x] = i;
		}
		for (int i = 1; i <= n; i++){
			maxx[i]=max(maxx[i],n-last[i]+1);
			if(maxx[i]!=n+1) dis[maxx[i]]=min(dis[maxx[i]],i);
		}
		for (int i = 1; i <= n; i++){
			if(dis[i]==300001) {cout << -1 <<" ";continue;}
			cout << dis[i] << " ";
			if(i!=n) dis[i+1]=min(dis[i+1],dis[i]); 
		}
		cout << endl;
    }
    return 0;
}


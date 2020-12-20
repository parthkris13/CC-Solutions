#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;

int32_t main(){
    IOS;
    int h,w,b;
    cin >> h >> w >> b;
    if(b==0){
        cout << 0 << endl;
        return 0;
    }
    int ans1 = 0;
    int x[b], y[b];
    int countx[h]={}, county[b]={};
    for(int i =0; i<b; i++){
        cin >> x[i];
        //countx[x[i]-1]++;
        cin >> y[i];
        //county[y[i]-1]++;
    }
    for(int i = 0;i<b; i++) countx[x[i] -1]++;
    int max = 0;
    int ansx=0,ansy=0;
    for(int i = 0; i<h; i++){
        if(countx[i] >= max ){
            max = countx[i];
            ansx = (i+1);
        }
    }
    ans1+=max;
    max = 0;
    for(int i = 0;i<b; i++) if(x[i] != ansx) county[y[i] -1]++;
        
    
    for(int i = 0; i<w; i++){
        if(county[i] >= max){
            max = county[i];
            ansy = (i+1);
        }
    }
    //cout << ansx << " " << ansy << endl;
    //cout << max << endl;
    ans1+=max;
    //cout << ans1 << endl;

    //for(int k=0; k<b; k++) if((x[k] == ansx) || (y[k] == ansy)) ans1++; 
    for(int i = 0; i<h; i++) countx[i] = 0;
    for(int u =0; u<w; u++) county[u] = 0;

    int ans2=0;
    for(int i = 0;i<b; i++) county[y[i] -1]++;
    max = 0;
    ansx=0;
    ansy=0;
    for(int i = 0; i<w; i++){
        if(county[i] > max ){
            max = county[i];
            ansy = (i+1);
        }
    }
    ans2+=max;
    max = 0;
    for(int i = 0;i<b; i++) if(y[i] != ansy) countx[x[i] -1]++;
        
    
    for(int i = 0; i<h; i++){
        if(countx[i] > max){
            max = countx[i];
            ansx = (i+1);
        }
    }
    ans2+=max;
    //for(int k=0; k<b; k++) if((x[k] == ansx) || (y[k] == ansy)) ans2++; 
    //int ans = 0;
    if(ans1 > ans2) cout << ans1 << endl;
    else cout << ans2 << endl;
    //cout << max (ans1,ans2) << endl;
    return 0;
}


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int n;
int arrx[N], arry[N];
int dist(int x, int y){
    int d = 0;
    for(int i=0; i<n; i++) d+=(abs(x-arrx[i])+abs(y-arry[i]));
    return d;
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int xsum = 0, ysum = 0;
        for(int i=0; i<n; i++){
            int x,y;
            cin >> x >> y;
            arrx[i] = x;
            arry[i] = y;
            xsum+=x;
            ysum+=y;
        }
        int ans = 1;
        
        sort(arrx,arrx+n);
        sort(arry,arry+n);
            if(n%2!=1){
                int x1 = arrx[n/2-1];
                int x2 = arrx[n/2];
                int y1 = arry[n/2-1];
                int y2 = arry[n/2];
                ans = (x2-x1+1)*(y2-y1+1);
            }

        
        cout << ans <<  endl;
    }
    return 0;
}
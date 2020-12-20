#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string a,b,c,d;
        cin >> c >> d;
        int flag = 0;
        for(int i = 0; i<n; i++){
            if(c[i] != d[i]){
                a+=c[i];
                b+=d[i];
            }
        }
        int count[26] = {0};
        for(int i = 0; i<a.size(); i++) count[a[i]-'a']++;


        for(int i = 0; i<n; i+=k){
            for(int j = 1; j<k; j++){
                if(d[i] != d[j]){
                    flag = -1;
                    break;
                }
            }
            if(flag==0){
                int p = b[i] - 'a';
                int r;
                for(int j = 0; j<=p; j++){
                    r = k;
                    if(count[j] >= k){
                        count[j] -= k;
                        r=0;
                    }
                    else{
                        r-=count[j];
                        count[j] = 0;
                    }
                    if(r==0) break;
                }
                if(r!=0){
                    flag = -1;
                    break;
                }
            }
        }
        
        cout << "NO" << endl;
    }
    return 0;
}
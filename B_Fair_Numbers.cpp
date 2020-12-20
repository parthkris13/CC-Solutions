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
        int n;
        cin >> n;
        int flag = 0;
        int p=0;
        int pks = 0;
        int parth = 0;
        int c;
        while(flag==0){
            p = n;
            c=0;
            while(p){
                parth = p%10;
                if(parth!=0){
                    if(n%parth!=0){
                        c=1; 
                        break;
                    }
                }
                p=p/10;
            }
            if(!c){
                cout << n; 
                flag=1; 
                break;
            }
            n++;
        }
        cout << endl;
    }
    return 0;
}
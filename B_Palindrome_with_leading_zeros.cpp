#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        string n;
        cin >> n;
        int len = n.size();
        int flag = 1;
        int dorime = 1;
        for(int i = len-1, j = 0; i > j; ){ 
            if(n[i] == '0' && n[j]!='0' && dorime == 1){
                i--;
                continue;
            }
            else if((n[i] == n[j])){
                dorime = 0;
                i--;
                j++;
                continue;
            }
            else{
                flag = 0;
                break;
            }

        }
        

        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
        

    }
    return 0;
}


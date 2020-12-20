#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define db long double
#define x first
#define y second
#define mp make_pair
#define pb push_back
#define all(a) a.begin(), a.end()
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        int count = 1;
        int flag=1;
        for(int i=0;i<8;i++){
            for(int j=0; j<8;j++){
                if(flag){
                    cout << "O";
                    flag = 0;
                    continue;
                }
                if(!flag){
                    if(count < k){
                        cout << ".";
                        count++;
                    }
                    else cout << "X";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}


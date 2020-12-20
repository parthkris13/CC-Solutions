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
        string pks;
        cin >> pks;
        char c = '2';
        int count = 0;
        int flag = 0;
        for(int i = 0; i<n; i++){
            if(count == 0) c = '2';
            if(count == 1) c = '0';
            if(count == 2) c = '2';
            if(count == 3) c = '0';
            if(pks[i] == c) count++;
            else break;
            if(count == 4){
                flag = 1;
                break;
            }
        }
        if(count == 0){
            if(pks[n-4] == '2' && pks[n-3] == '0' && pks[n-2] == '2' && pks[n-1] == '0'){
                flag = 1;
            }
        }
        else if(count == 1){
            if(pks[n-3] == '0' && pks[n-2] == '2' && pks[n-1] == '0'){
                flag = 1;
            }
        }
        else if(count == 2){
            if(pks[n-2] == '2' && pks[n-1] == '0'){
                flag = 1;
            }
        }
        else{
            if(pks[n-1] == '0'){
                flag = 1;
            }
        }
        if(flag == 1) cout << "YES";
        else cout << "NO";
        
        
        cout << endl;
    }
    return 0;
}
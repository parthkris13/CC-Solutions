#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 1e3 + 500;
int arr[N][N]={0},pks[N][N]={0};
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        
        for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >> arr[i][j];  
        bool possible = true;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++){
                pks[i][j] = 4;
                if(i == 0) pks[i][j]--;
                if(j == 0) pks[i][j]--;
                if(i == n-1) pks[i][j]--;
                if(j == m-1) pks[i][j]--;
                if(arr[i][j] > pks[i][j]) possible = false;
            }
        if(possible == true){
            cout << "YES" << endl;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++) cout << pks[i][j] << " ";
                cout << endl;
            }
        }
        if(possible == false) cout << "NO" << endl;
    }
    return 0;
}


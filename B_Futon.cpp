#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int h,w;
    cin >> h >> w;
    char arr[h][w];
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
            if(arr[i][j] == '.'){
                //cout << "parth" << endl;
                if((i+1)<h && arr[i+1][j] == '.' ) ans++;
                if((j+1)<w && arr[i][j+1] == '.') ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
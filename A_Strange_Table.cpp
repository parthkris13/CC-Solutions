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
        int n,m;
        cin >> n >> m;
        int x;
        cin >> x;

        int ans = 1;
        int row = (x-1);
        row%=n;
        int col = (x-1);
        col/=n;
        ans = (row*m)+(col+1);
        cout << ans << endl;
        

    }
    return 0;
}


/*

1 2
3 4

1 3
2 4


1 2 3
4 5 6
7 8 9

1 4 7
2 5 8
3 6 9

*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int chef = (a%9==0)?a/9:(a/9)+1;
        int rick = (b%9==0)?b/9:(b/9)+1;
        if(rick <= chef) cout << 1 << " " << rick << endl;
        else cout << 0 << " " << chef << endl;
    }
    return 0;
    
}


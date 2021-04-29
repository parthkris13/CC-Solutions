// Nobody else is stronger than I am
// Yesterday I moved a mountain
// I bet I could be your hero
// I am a mighty little man
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
        for(int i = 1; i<=(2*k-n-1); i++) cout << i << " ";
        for(int i = k; i>(2*k-n-1); i--) cout << i << " ";
        
        cout << endl;
    }
    return 0;
}
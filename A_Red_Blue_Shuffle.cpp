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
        string s1,s2;
        cin >> s1 >> s2;
        int nr=0, nb=0;
        for(int i=0; i<n;i++){
            if(s1[i]>s2[i]) nr++;
            else if(s1[i]==s2[i]) continue;
            else nb++;
        }
        if(nr>nb) cout << "RED" << endl;
        else if(nb>nr) cout << "BLUE" <<endl;
        else cout << "EQUAL" << endl;

        
        
    }
    return 0;
}
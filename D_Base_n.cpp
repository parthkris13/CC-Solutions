#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
string s;
int basen(int n){
    int res  = 0;
    int len = s.size();
    int e = 0;
    for(int i = len - 1; i>=0; i--){
        string l;
        l+=s[i];
        int p = stoi(l);
        int base = pow(n,e);
        //cout << n <<" " <<  base << endl;
        res+=(p*base);
        //cout << e << " " << res << endl;
        e++;
    }
    return res;
}
int32_t main(){
    IOS;
    int t;
    t = 1;
    while(t--){
        
        cin >> s;
        sort(s.begin(), s.end(), greater<int>());
        int m;
        cin >> m;
        string pks;
        pks+=s[0];
        int d = stoi(pks);
        //cout << d << endl;
        set<int> result;
        //cout << basen(2) << endl;
        for(int i = d+1; ; i++){
            int q = basen(i);
            //cout << q <<  endl;
            if(q<=m) result.insert(q);
            else break;
        }


        
        cout << result.size() << endl;
    }
    return 0;
}
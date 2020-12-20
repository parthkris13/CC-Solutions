#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t count(vector <int> p){
    int k = 1;
    for(int i = 0; i<p.size(); ++i) k *= p[i];
    return k;
}
int32_t main(){
        int k;
        cin >> k;
        vector <int> p(10,1);
        int u = 0;
        while(count(p) < k){
            p[u++]++;
            u%=10; 
        }
        string pks = "codeforces";
        for(int i = 0; i<10; i++)
            for(int j = 0; j<p[i]; ++j) cout << pks[i];
    return 0;
}


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n;
    cin >> n;
    int p,alice,total=0;
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++){
        cin >> p;
        v.push_back(make_pair(p,i));
        total += p;
        if(i==0) alice = p;
    }
    int coal=0,party=0;
    int flag=0;
    vector <int> k;
    for(auto &it:v){
        if(party == 0) coal+=it.first,party++;
        else{
            if(alice >= 2*it.first){
                coal+=it.first;
                party++;
                k.push_back(it.second);
            }
        }
        if(coal > total/2){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << party << endl;
        cout << "1" << " ";
        for(auto &it: k) cout << it + 1 << " ";
    }
    else cout << "0" << endl;
    return 0;
}


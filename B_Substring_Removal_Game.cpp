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
        string s;
        cin >> s;
        vector<int> pks;
        int count = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '0'){
                pks.push_back(count);
                count = 0;
            }
            else count++;
        }
        if(s[s.size()-1] == '1') pks.push_back(count);
        sort(pks.begin(),pks.end(),greater<int>());
        //for(auto it: pks) cout << it << " ";
        int ans = 0;
        int flag = 0;
        for(auto it: pks){
            if(flag == 0){
                ans+=it;
                flag = 1;
            }
            else flag = 0;
            if(it == 0) break;
        }
        cout << ans << endl;

        

    }
    return 0;    
}


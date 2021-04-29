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
        string s;
        cin >> s;
        string r = s;
        
        int n = s.length();
        int count = 0;
        map<int,int> pks;
        int c[26]={0};
        reverse(r.begin(),r.end());
        for(int i = 0; i<n; i++) c[s[i] - 'a']++;
        for(int i = 1; i < n; i++){
            if(i-2>=0){
                if(pks[i]==0 && pks[i-2]==0 && r[i]==r[i-2]){
                    pks[i]=1;
                    count++;
                }
                else if(pks[i-1]==0 && pks[i-2]==0 && r[i]==r[i-1] && r[i-1]==r[i-2]){
                    pks[i-1]=1;
                    count++;
                }
            }
            if(pks[i-1]==0 && r[i]==r[i-1]){
                pks[i]=1;
                count++;
            }
        }
        //cout << s << " " << count << endl;
        cout << count << endl;
    }
    return 0;
}
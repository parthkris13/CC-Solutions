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
        string s;
        cin >> s;
        int ans = 0;
        for(int i = 0, j=n-1; i<j, j>i; ){
            //cout << i << " " << j << endl;
            if(s[i] != s[i+1] && s[j] != s[j--]){
                i++;
                j--;
            }
            else if(s[i] != s[i+1]){
                i++;
            }
            else if(s[j] != s[j--]){
                j--;
            }
            else{
                ans++;
                for(int l = i+1; l<j; l++){
                    if(s[l] == '1') s[l] = '0';
                    else s[l] = '1';
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
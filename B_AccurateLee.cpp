#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      string s;
      cin >> s;
      int i = 0, j = n-1;
      while(i<n && s[i] == '0') i++;
      while(j>=0 && s[j] == '1') j--;
      string ans = s;
      if(i<j){
        ans = "";
        for(int p = 0; p<i; p++) ans += s[p];
        ans+='0';
        for(int p = j+1; p<n; p++) ans += s[p];
      }
      cout << ans << endl;
    }
    return 0;
}
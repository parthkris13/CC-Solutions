#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
bool isDiv9(string num){
   int n = num.length();
   long sum = accumulate(begin(num), end(num), 0) - '0' * n;
   if(sum % 9 == 0)
      return true;
      return false;
}
int32_t main(){
    IOS;
    string s;
    cin >> s;
    if(isDiv9(s)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}


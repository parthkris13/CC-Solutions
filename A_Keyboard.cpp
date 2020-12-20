#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    char s;
    cin >> s;
    char t;
    cin >> t;
    if(s=='Y'){
        if(t=='a') cout << "A" << endl;
        if(t=='b') cout << "B" << endl;
        if(t=='c') cout << "C" << endl;
    }
    else{
        if(t=='a') cout << "a" << endl;
        if(t=='b') cout << "b" << endl;
        if(t=='c') cout << "c" << endl;
    }
    return 0;
}
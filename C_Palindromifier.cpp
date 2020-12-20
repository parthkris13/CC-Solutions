#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    string s;
    cin>>s;
    int n = s.size();
    cout << 4 << endl;
    cout << "L " << n-1 << endl;
    n+=(n-2);
    cout << "R " << n-1 << endl;
    n++;
    cout << "L " << n-1 << endl;
    n+=(n-2);
    cout << "L " << 2 << endl;
    


    return 0;
}
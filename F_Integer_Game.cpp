#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int a[3], b[3], c[3], inp;
int ans(){
    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];
    sort(b, b+3);
    if (b[2] - b[1] == b[1] - b[0]) return b[2] - b[1];
    int tmp = b[2] - b[1] + b[2] - b[0];
    return tmp;
}
int main() {
    cin >> a[0] >> a[1] >> a[2];
    cout << "First" << endl;
    int outp = ans();
    cout << outp << endl;
    while (1){
        cin >> inp;
        if (inp == -1) break;
        --inp;
        a[inp] += outp;
        outp = ans();
        cout << outp << endl;
        continue;
    }
  return 0;
}
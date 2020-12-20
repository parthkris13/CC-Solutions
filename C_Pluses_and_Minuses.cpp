#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int arr[s.size()];
        int res = 0, value=0, min = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '+') value ++;
            else value --;
            arr[i] = value;
            if(arr[i] < min) min = arr[i];
        }
        for(int i = 0; i <= min; i++){
            for(int j = 0; j < s.size(); j++){
                if(i > )
            }
        }
        cout << res << endl;
    }
    return 0;
}
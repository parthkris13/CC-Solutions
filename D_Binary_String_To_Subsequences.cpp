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
        int s0 = 0;
        int s1 = 0;
        cin >> n;
        int arr[n];
        string s; 
        cin >> s;
        for(int j = 0; j<n; j++){
            if(s[j] == '0'){
                if(s1 > 0){
                    s1--;
                    s0++;
                    arr[j] = s0;
                }
                else{
                    s0++;
                    arr[j] = s0;
                }
            }
            else{
                if(s0 > 0){
                    arr[j] = s0;
                    s0--;
                    s1++;
                }
                else{
                    s1++;
                    arr[j] = s1;
                }
            }
        }
        cout << s1 + s0 << "\n";
        for(int j = 0; j<n; j++){
            cout << arr[j] << " ";
        }
        cout << endl;
    
    }
    return 0;
}


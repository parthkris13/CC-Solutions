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
        int arr[n];
        map<int,int> pks;
            for(int i = 0;i < n; i++){
                int parth;
                cin >> parth;
                pks[parth]++;
            }
            for(auto iterator: pks){
                if(iterator.second>1){
                    pks[iterator.first]--;
                    pks[iterator.first+1]++;
                }
            }
        
        cout << pks.size() << endl;
    }
    return 0;
}
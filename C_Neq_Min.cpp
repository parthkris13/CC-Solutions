#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;

int32_t main(){
    IOS;
    int n;
    cin >> n;
    set<int> parth;
    int ans = 0;
    for(int i =0; i<n; i++){
        int x;
        cin >> x;
        parth.insert(x);
        if(ans != x){
            cout << ans << endl;
        }
        else{
            //cout << "parth" << endl;
            for(int i = ans+1; i<200000; i++){
                if(parth.find(i) != parth.end()){
                    continue;
                }
                else{
                    ans = i;
                    cout << ans << endl;
                    break;
                }
            }
        }
    }
        
        



    
    return 0;
}
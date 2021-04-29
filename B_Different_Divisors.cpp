#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int d;
        cin >> d;
        
        int flag = 0;
        int i = 1+d;
        int ans = 1;
        while(flag<2){
            if(isPrime(i)==true){
                ans*=i;
                flag++;
                i+=d;
            }
            else i++;
        }

        cout << ans << endl;
        

        
        
    }
    return 0;
}
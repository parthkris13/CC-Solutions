#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int count = 0;
        while(n>1){
            if(n==2){
                count++;
                break;
            }
            else if(n > 2 && n%2 == 0){
                long long int p = n;
                while(p%2 == 0){
                    p = p/2;
                }
                if(p!=1) n = n/p;
                else n = n-1;
                count++;
            }
            else if(n > 2 && n%2 == 1){
                n = 1;
                count++;
            }
        }
        if (count % 2 == 1) cout << "Ashishgup" << endl;
        else cout << "FastestFinger" << endl;
    }
    return 0;
}
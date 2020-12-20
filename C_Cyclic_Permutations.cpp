#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
int n;
int fact[100001];

int factorial()
{ 
    fact[0] = 1;
    for(int i = 1; i<=n; i++) fact[i] = (i * fact[i-1]) % mod;  
} 
int32_t main(){
    IOS;
    int n;
    cin >> n;
    //factorial();
    int val = 1;
    int a = 1, b=1;

    for(int i = 1; i<n; i++){
        a = (a%mod*i%mod)%mod;
        b = (b%mod*2%mod)%mod;


    }
    val = ((a*n)-b)%mod;
    cout << val << endl;

    
         

        

    
    return 0;
    
}


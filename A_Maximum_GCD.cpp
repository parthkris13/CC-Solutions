#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   
    // base case 
    if (a == b) 
        return a; 
   
    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >>  n;
        long long int a,b;
        a = n/2;
        for(long long int i = n/2; i>0; i--){
            if(i*2 <= n){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
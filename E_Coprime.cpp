#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9+7;
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
// Function to find gcd of array of 
// numbers 
int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
}
int getMaxGCD(int arr[], int n) {
   int high = 0;
   for (int i = 0; i < n; i++)
   high = max(high, arr[i]);
   int divisors[high + 1] = { 0 }; //array to store all gcd values
   for (int i = 0; i < n; i++) {
      for (int j = 1; j <= sqrt(arr[i]); j++) {
         if (arr[i] % j == 0) {
            divisors[j]++;
         if (j != arr[i] / j)
            divisors[arr[i] / j]++;
         }
      }
   }
   for (int i = high; i >= 1; i--)
   if (divisors[i] > 1)
   return i;
}
int32_t main(){
    IOS;
    int n;
    cin >> n;
    int arr[n];
    for(int &x: arr) cin >> x;
    int p = getMaxGCD(arr,n);
    if(p==1){
        cout << "pairwise coprime" << endl;
        return 0;
    }
    p = findGCD(arr,n);
    if(p==1){
        cout << "setwise coprime" << endl;
        return 0;
    }
    cout << "not coprime" << endl;
 
 
     
    return 0;
}
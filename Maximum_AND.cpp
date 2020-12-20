#include <stdio.h>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define int long long int
#include<iostream> 


int getNext(int n) 
{ 
    /* Compute c0 and c1 */
    int c = n; 
    int c0 = 0; 
    int c1 = 0; 
  
    while (((c & 1) == 0) && (c != 0)) 
    { 
        c0 ++; 
        c >>= 1; 
    } 
    while ((c & 1)==1) 
    { 
        c1++; 
        c >>= 1; 
    } 
  
    // If there is no bigger number with the 
    // same no. of 1's 
    if (c0 +c1 == 31 || c0 +c1== 0) 
        return -1; 
  
    // position of rightmost non-trailing zero 
    int p = c0 + c1; 
  
    // Flip rightmost non-trailing zero 
    n |= (1 << p); 
  
    // Clear all bits to the right of p 
    n &= ~((1 << p) - 1); 
  
    // Insert (c1-1) ones on the right. 
    n |= (1 << (c1 - 1)) - 1; 
  
    return n; 
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i<n; i++) cin >> arr[i];
        int x = pow(2,k) - 1;
        
        int ans, sum = 0, max = 0;
        while (1){
            for(int i = 0; i<n; i++) sum = sum + (x&arr[i]);
           // cout << sum << " pl" << endl;
            if(sum > max){
                max = sum;
                ans = x;
            }
            else if(sum == 0) break;
           // cout << "when x is " << x << " the sum is " << max << endl;
            sum = 0;
            x = getNext(x);
            // cout << x << endl;
        }
    cout << ans << endl;    
    }
    return 0;
}
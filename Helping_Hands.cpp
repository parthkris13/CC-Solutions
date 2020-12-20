#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
// Returns LCM of array elements 
int findlcm(int arr[], int n) 
{ 
    // Initialize result 
    int ans = arr[0]; 
  
    // ans contains LCM of arr[0], ..arr[i] 
    // after i'th iteration, 
    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) arr[i] = i+1;
        int ans = 0;
        int lcm = findlcm(arr,n);
        cout << lcm << endl;
        while(arr[n-1] < lcm){
            int t = lcm/arr[n-1];
            while(t)

        }
        for(int i = n-2;i>=0; i--){
            if(arr[i]!=lcm) ans ++;
        }


    cout << ans << endl;
        

    }
    return 0;    
}


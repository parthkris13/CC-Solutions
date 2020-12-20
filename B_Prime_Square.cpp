#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 1e9 + 7;
int fact(int n){
    int factorial = 1;
    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }
    return factorial;
}
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n][n];
        for(int i = 0; i<n; i++){
            for(int k = 0; k<n; k++){
                if(i==k) arr[i][k] = 1;
                else arr[i][k] = 0;
                //cout << arr[i][k] << " ";
            }
        }
        int i =0,j =1;
        for(; j<n;) arr[i++][j++] = 4;
        j=0;
        for(; i<n; j++,i++) arr[i++][j++] = 4;

        
        for(int l = 0; l<n; l++){
            for(int k = 0; k<n; k++){
                cout << arr[l][k] << " "; 
            }
            cout << endl;
        }

    
    }
    return 0;
}
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int t;
    cin >> t;
    int z = t;
    while(t--){
        int n,a,b,c;
        cin >> n >> a >> b >> c;
        if(a+b-c > n){
            cout << "Case #" << (z-t) <<": " << "IMPOSSIBLE" << endl;
            continue;
        }
        if(n!=1){
            if(a==b && b == c && c==1){
                cout << "Case #" << (z-t) <<": " << "IMPOSSIBLE" << endl;
                continue;
            }
        }
        int arr[n];
        for(int i =0; i<n; i++) arr[i]= 1;
        if(a==1){
            arr[0] = n;
            for(int i=0; i>n-b; i--) arr[i] = n-1;
        }
        else if(b==1){
            arr[n-1] = n;
            for(int i = 0; i<a-1; i++) arr[i] = n-1;
        }
        else{
            int left = a - c;
        int right = b - c;
        
        if(c&1){
            int d = c/2 + 1;
            for(int i = 0; i<left; i++) arr[i] = n-1;
            int p = left;
            while(d--) arr[p++] = n;
            d = c/2;
            for(int i = n-1; i>n-1-right; i--) arr[i] = n-1;
            p = n - 1 - right;
            while(d--) arr[p--] = n;
        }
        else{
            int d = c/2;
            for(int i = 0; i<left; i++) arr[i] = n-1;
            int p = left;
            while(d--) arr[p++] = n;
            d = c/2;
            for(int i = n-1; i>n-1-right; i--) arr[i] = n-1;
            p = n - 1 - right;
            while(d--) arr[p--] = n;
        }
        }

        cout << "Case #" << (z-t) <<": ";
        for(int i = 0; i<n; i++) cout << arr[i] << " ";
        cout << endl;

    
                    
    }
    return 0;
}


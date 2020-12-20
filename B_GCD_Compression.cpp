#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[2*n];
        int even[2*n], odd[2*n];
        int p=0, q=0;
        for(int i = 0; i<2*n; i++){
            cin >> arr[i];
            if(arr[i]%2 == 0) even[p++] = i+1;
            else odd[q++] = i+1;
        }
        if(p%2 == 1){
        for (int i = 0; i<p-1; i+=2){
            cout << even[i] << " " << even[i+1] << endl;
        }
        for (int i = 0; i<q-1; i+=2){
            cout << odd[i] << " " << odd[i+1] << endl;
        }
        }
        else{
            for (int i = 0; i<=p-1; i+=2){
            cout << even[i] << " " << even[i+1] << endl;
        }
        for (int i = 0; i<q-2; i+=2){
            cout << odd[i] << " " << odd[i+1] << endl;
        }
        }
    }
    return 0;
}
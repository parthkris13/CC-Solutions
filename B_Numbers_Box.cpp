#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n, m, total = 0, negative = 0, k=0;
        cin >> n >> m;
        int p = n*m;
        int arr[p];
        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                cin >> arr[k];
                if(arr[k]<=0) negative++;
                arr[k] = abs(arr[k]);
                k++;
            }
        }
        if(negative%2!=1) for(int i = 0;i < p; i++) total += arr[i];
        else{
            sort(arr,arr+p);
            total = -arr[0];
            for(int i = 1;i < p; i++) total += arr[i];
        }
        cout << total;
        
        cout << endl;
    }
    return 0;
}
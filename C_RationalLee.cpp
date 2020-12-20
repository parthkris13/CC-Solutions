#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;
    cin >> t;
    while(t--){
      //  cout << "test no" << t << endl;
        int n,k;
        cin >> n >> k;
       // cout << n << k << endl;
        int arr[n] = {0};
        for(int i = 0; i<n; i++) cin >> arr[i];
        int num[k];
        for(int i = 0; i<k; i++) cin >> num[i];
        sort(arr,arr+n);
       // for(int i = 0; i<n; i++) cout << arr[i] << endl;
        sort(num, num +k);
       // for(int i = 0; i<k; i++) cout << num[i] << endl;
        int sum = 0;
        for (int i=n-1; i>n-k-1; i--) sum = sum + arr[i];
        int p = (n-k), count = 0;
        for(int i = 0; i<k; i++){
            if(num[i] - 1 == 0){
                sum = sum + arr[n - 1 - count];
               // cout << "pks " << sum << endl;
                count++;
            }
            else{
                int t = (p - num[i] + 1);
            //  cout << "pks2 " << sum << " " << p << " " << t << " " << arr[t];
                sum = sum + arr[t];
                p = t;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
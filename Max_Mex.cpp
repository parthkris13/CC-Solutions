#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int arr[n],count =0, miss = -1, flag =0, index = -1;
        for(int i = 0; i<n; i++){
            cin >> arr[i];
            if(i==0) count++;
            if(i>0){
                if((arr[i-1] + 1) != arr[i]){
                    miss = arr[i-1] + 1;
                    if(miss != m) count = 1;
                    else {
                        flag = 1;
                        index = i;
                        break;
                    }
                }
                else count++;
            }
        }
        count = count + (n-index);
        if (flag) cout << count << endl;
        else cout << "-1" << endl;
    }
    return 0;
}    
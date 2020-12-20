#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 1e5 + 5;

int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int count[11] = {0};
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i = 0; i<n; i++) count[arr[i]]++;
        int max = -1;
        int ans = -1;
        int count2[N] = {0};
        for(int i = 0; i<11; i++){
            //cout << count[i] << " ";
            if(count[i] == 0) continue;
            count2[count[i]]++;
        }
        //cout << endl;
        
        for(int i =0; i<N; i++){

            if(count2[i] > max){
                //cout << count2[i] << " ";
                max = count2[i];
                ans = i;
            }
        }


        cout << ans << endl;
    }
    return 0;
}


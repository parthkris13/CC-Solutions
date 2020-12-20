#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int max_Sum = 0;
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        int flag = 0;
        cin>>n;
        int arr[n];
        for(int &x:arr) cin>>x;
        int ans=0;
        sort(arr,arr+n);
        set < int > p;
        for(int i=0; i<n; i++) for(int j=i+1; j<n; j++) p.insert(arr[i] + arr[j]);
        for (auto it=p.begin(); it != p.end(); ++it){
            int sum = *it;
            int count = 0;
            int index = n;
            for(int i =0; i<n; i++){
                for(int j = index-1; j > i; j--){
                    if(arr[i] + arr[j] == sum){
                        count ++ ;
                        index = j;
                        break;
                    } 
                }
            }
            if(count  > ans) ans = count;
 
        }
        

        cout << ans << endl;

        
    }
    
    
    return 0;
}


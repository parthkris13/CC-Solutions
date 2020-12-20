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
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        int ans=-1,flag=0, val1=-1, val2=-1;
        for(int i=0; i<n; i++){
            if(arr[i]%2 == 0){
                ans = i;
                flag = 1;
                break;
            }
            else{
                if(val1<0) val1=i;
                else if(val2<0) val2=i;
                if(val1 >=0 && val2>=0){
                    flag=2;
                    break;
                }
            }

        }
        if(flag == 1){
            cout << "1" << endl;
            cout << ans+1 << endl;
        }
        else if(flag == 2){
            cout << "2" << endl;
            cout << val1+1 << " " << val2+1 << endl;
        }
        else cout << "-1" <<endl;
    }
    return 0;
}


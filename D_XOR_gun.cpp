#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    t=1;
    while(t--){
        int n;
        cin >> n;
        int arr[n+1];
        for(int i=1; i<=n; i++) cin >> arr[i];
        for(int i=1;i<=n;i++) arr[i]^=arr[i-1];
        for(int l=3;l<=n;l++)
            for(int i=0;i+l<=n;i++)
                for(int j=i+1;j<i+l;j++)
                    if((arr[j]^arr[i])>(arr[j]^arr[i+l])){
                        cout << l-2 << endl;
                        return 0;
                    }
        cout << -1 << endl;
        return 0;
    }
}
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
        int dorime = 0;
        int count[3]={0};
        int c0=0, c1=0, c2=0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            arr[i]=arr[i]%3;
            count[arr[i]]++;
        }
        
        c0 = count[0];
        c1 = count[1];
        c2 = count[2];
        int balance = n/3;
        int ans = 0;
        while(c0>balance){
            if(c1<balance){
                ans++;
                c0--;
                c1++;
            }
            else{
                ans+=2;
                c2++;
                c0--;
            }
        }
        while(c1>balance){
            if(c2<balance){
                ans++;
                c1--;
                c2++;
            }
            else{
                ans+=2;
                c0++;
                c1--;
            }
        }
        while(c2>balance){
            if(c0<balance){
                ans++;
                c2--;
                c0++;
            }
            else{
                ans+=2;
                c1++;
                c2--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
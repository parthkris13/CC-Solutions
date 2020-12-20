#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int tri[100005];
    for(int i = 0; i<100000; i++) tri[i] = (i*(i-1))/2;
    int n;
    cin >> n;
    for(int i = 2; i<100000; i++){
        int low = 2, high = 99999;
        while(low < high){
            int mid = (low+high)/2;
            if(tri[i] + tri[mid] < n) low = mid+1;
            else high = mid;
        }
        if(tri[i] + tri[low] == n){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;    
}


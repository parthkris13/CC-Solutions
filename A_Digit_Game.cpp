#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 3e5 + 7;
long long optimiseCode4Hire2020(int n, int seed) {
    srand(seed);
    
    vector<int> arr1(n);
    for (int i = 0; i < n; i++) {
        arr1[i] = i + 1;
    }
    for(int i = 0;i<n; i++) cout <<arr1[i]<<" ";
    cout << endl;
    random_shuffle(arr1.begin(), arr1.end());
    for(int i = 0;i<n; i++) cout <<arr1[i]<<" ";
    cout << endl;
    
    vector<int> arr2(n);
    for (int i = 0; i < n; i++) {
        arr2[i] = i + 1;
    }
    for(int i = 0;i<n; i++) cout <<arr2[i]<<" ";
    cout << endl;
    random_shuffle(arr2.begin(), arr2.end());
    for(int i = 0;i<n; i++) cout <<arr2[i]<<" ";
    cout << endl;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int posAtArr1;
        for (int j = 0; j < n; j++) {
            if (arr1[j] == i) {
               posAtArr1 = j; 
            }
        }
        int posAtArr2;
        for (int j = 0; j < n; j++) {
            if (arr2[j] == i) {
               posAtArr2 = j; 
            }
        }
        cout << posAtArr1 << " " << posAtArr2 << endl;
        
        for (int j = 0; j < posAtArr1; j++) {
            for (int k = 0; k < posAtArr2; k++) {
                if (arr1[j] == arr2[k]) {
                    ans++;
                }
            }
        } 
    }
    return ans;
}
int32_t main(){
    IOS;
    int p = optimiseCode4Hire2020(5,100);
    cout << p << endl;
    
    return 0;
}


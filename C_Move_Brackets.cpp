#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int arr[51]={0};
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int len;
        cin >> len;
        string str;
        cin >> str;
        int k =-1, count=0;
      //  cout << "test " << t << endl;
        for(int i=0;i<len;i++){
           // cout << "len = " << i << "count is " << count << " k is " << k <<endl;
            // cout << " char is " << str[i] << endl;
            if(str[i]=='(') arr[++k]=1;
            else{
                if(k<0) count++;
                else{
                    if(str[i]==')' && arr[k]==1) k--;
                    else count++;
                }
            }
        }
    cout << count << endl; 
    }
    return 0;
}
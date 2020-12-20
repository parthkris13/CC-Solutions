/*
 * 	Roses are red
 * 		Violets are blue
 * 			I cried
 * 				And so did you
 */
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
        string s;
	    cin>>s;
	    int n=s.length(),min=2e9,x=2e9,max=0,p=0;
	    for(char k='a';k<='z';k++){
	        p=0;
            max=0;
	        for(int i = 0;i <= n; i++){
	            ++p;
	            if(s[i] == k||i == n){
	                if(p > max) max = p;
	                p=0;
	            }
	        }
	        if(max < min) min = max;
	    }
	    cout << min << endl;
    }    
    return 0;
}
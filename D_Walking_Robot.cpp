/*
 * 	In an empty-like sky
 * 		What were you looking at?
 * 			I did not even understand
 * 				The reason I woke up
 * 	I was terribly scared
 * 		Of believing
 * 			Because of that
 * 				I've thrown everything away
 * 	It would have been better
 * 		If this world that I hate so much
 * 			Could just disappear
 * 				If I continue to believe
 * 					Won't it hurt me?
 *
 * 	It was your voice
 * 		That has saved me
 * 			And keeps me going
 * 				The feeling that you taught me
 * 					That's true.
 * 	I will scream your name
 * 		Strongly hold your hand
 * 			I will not let go of it anymore
 * 				No matter what the future holds
 * 					If you're with me, I won't run away
 */
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main(){
    IOS;
    int n,b,a;
    cin >> n >> b >> a;
    int maxa = a;
    int s[n];
    for(int i = 0; i<n; i++) cin >> s[i];
    int pos=0;
    for(int i=0;i<n;i++){
        if(s[i]==1){
            if(b>0 && a < maxa){
                b--;
                pos++;
                a++;
            }
            else if(b>0 && a==maxa){
                a--;
                pos++;
            }
            else if(b==0 && a >0){
                a--;
                pos++;
            }
            else if(a==0 && b == 0) break;
        }
        else if(s[i]==0){
            if(a>0){
                a--;
                pos++;
            }
            else if(a==0 && b>0){
                b--;
                pos++;
            }
            else if(a==0 && b==0) break;
        }
      // cout << i <<" "<< b <<" " << a << " " << pos << endl;  
    }
    cout << pos << endl;
    return 0;
}
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
const int N = 1e5 + 5;
int32_t main(){
    IOS;
    int n;
    cin >> n;
    int arr[n];
    for(int &pks1 : arr) cin >> pks1;
    if(n>1){
        int pks1[n], pks2[n-1], pks3[1];
        for(int i = 0;i < n-1; i++){
            pks1[i] = -(arr[i])*(n);
            pks2[i] = (arr[i])*(n-1);
        }
        pks3[0] = -arr[n-1]-n;
        pks1[n-1] = n;
        cout << 1 << " " << n-1 << endl;
        for(int i = 0;i < n-1; i++) cout << pks2[i] << " ";
        cout << endl;
        cout << 1 << " " << n << endl;
        for(int i = 0;i < n; i++) cout << pks1[i] << " ";
        cout << endl;
        cout << n << " " << n << endl;
        cout << pks3[0] << endl;
    }
    else{
        cout << 1 << " " << 1 << endl;
        cout << 0 << endl;
        cout << 1 << " " << 1 << endl;
        cout << 0 << endl;
        cout << 1 << " " << 1 << endl;
        cout << -arr[0] << endl;
    }

    
    
    return 0;
}


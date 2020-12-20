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
const int N = 3e5 + 7;
int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<=30) cout << "NO" << endl;
        else{
            if(n == 36) cout << "YES" << endl << 6 << " " << 10 << " " << 15 << " " << 5 << endl;
            else if(n == 40) cout << "YES" << endl << 6 << " " << 14 << " " << 15 << " " << 5 << endl;
            else if(n == 44) cout << "YES" << endl << 6 << " " << 10 << " " << 15 << " " << 13 << endl;
            else cout << "YES" << endl << 6 << " " << 14 << " " << 10 << " " << n-30 << endl;
        }
    }
    return 0;
}


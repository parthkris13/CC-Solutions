/*
Tell me which side I'm on
Approaching constant failure
Tell me which side I'm on
(Who's friend or foe?)
Approaching constant failure
 
Between love and hate
Which path to follow?
How can I keep balance in this race?
Come faith, I'm dying (slowly)
 
In many ways I'm the burden that devides us from the light
In many ways you're the halo that keeps my spirit alive
 
Temptation
Play the good or evil part
With me, you evoke the dark
Erase the free will and watch me heal
 
Tell me which side I'm on
Approaching constant failure
 
Between love and hate
Which path to follow?
How can I keep balance in this race?
Come faith, I'm dying...
 
Amused by the trials and tribulations
If I survive I fly from here
But as the chosen pessimist
 
I carve my name in stone
I carve my name in stone
 
Amused by the trials and tribulations
If I survive I fly from here
 
How can I keep balance in this race?
Come faith I'm dying...
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
        string s;
        cin >> s;
        if(s.size()<=10) cout << s;
        else cout << s[0] << s.size()-2 << s[s.size()-1];
        
        cout << endl;
    }
    return 0;
}
 
/*
You can never truly see
Inside the ones you know
Until you’ve found them near
The edge of self control
 
All I hear are lies
You're lying to yourself
And everything is out of control
 
You're just a fuckin' slave of discontent
I'm sick of watching you dig this hole
 
Time waits - for no one
Won't stop - It can't be outrun
You know - That pain in your head
Won't stop 'til the desperation ends
 
You've found yourself chasing death
Oblivious until the end
You'll never stop chasing death
 
Innocence, common sense, I don't see the relevance
Of anything that you've got to say
Parasite, socialite, you're never gonna win this fight
There is no fucking easy way out
No easy way out
 
I know I should have seen it all coming
But I had to find it out on my own
A whore to incompetence you hide behind
The shadow that once was your thrown
Control is a discipline even when
Frustration just stands in your way
The throes of insanity feel just like
A war inside you everyday
 
I know I should have seen it all coming
But I had to find it out on my own
A whore to incompetence you hide behind
The shadow that once was your thrown
Control is a discipline even when
Frustration just stands in your way
The throes of insanity feel just like
A war inside you everyday
 
Time waits - for no one
Won't stop - It can't be outrun
There's just - no way of knowing
How long - paranoia's growing
Can’t stop the poison winning
Please - Just take away this feeling
You know - that pain in your head
Won't stop until the desperation ends
 
You've found yourself chasing death
Oblivious until the end
You'll never stop until you're dead
 
Innocence, common sense, I don't see the relevance
Of anything that you've got to say
Parasite, socialite, you're never gonna win the fight
There is no fucking easy way out
No easy way out
No easy way out
No easy way out
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 100001  
int prime[MAX], countdiv[MAX]; 
void SieveOfEratosthenes(){ 
    for (int i = 2; i * i <= MAX; ++i){ 
        if (!prime[i]) 
            for (int j = i * 2; j <= MAX; j += i) 
                prime[j] = i; 
    }  
    for (int i = 1; i < MAX; ++i) 
        if (!prime[i]) 
            prime[i] = i; 
} 
int32_t main(){
    IOS;
    SieveOfEratosthenes();
    int n; 
    cin>>n;
    int arr[n];
    for(int &x : arr) cin >> x;
    int ans = 0; 
    for (int i=0; i < n; ++i){ 
        int element = arr[i]; 
        while (element > 1) { 
            int div = prime[element];  
            ++countdiv[div]; 
            ans = max(ans, countdiv[div]); 
            while (element % div==0) element /= div; 
        } 
    }
    cout << ans << endl;
    return 0;
}


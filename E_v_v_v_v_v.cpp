/*
She's got some nice long hair and you know that she's a bad chick
All the boys stare, can't help it, it's a habit
Clothes that she wears, short skirt and a jacket
I just wanna get her all alone on a mattress
I just wanna have it, I just gotta have it
Rumors all around say her body is fantastic
All natural not a piece of her is plastic
Head to her toes, yeah they say that she's elastic
Yeah the whispers all around say she has a reputation
Don't believe it 'til I see it so I want a demonstration
And I've always learned it better with a hands on education
So I need a private session if you get what I am saying
And they say that she's not easy, no she's really complicated
But that only makes it better and it's got me so fixated
And I'm not the type to wait around I've never hesitated
But she's got me captivated so the game I'm gonna play it yeah
She's got a body like a coke fiend
She likes to keep the party going
These rumors got me feeling lonely
I want that body, baby show me
She's got a body like a coke fiend
She likes to keep the party going
These rumors got me feeling lonely
I want that body, baby show me
I want that body, baby show me
Yeah, heard you look good in a sundress
I heard you look good when you're undressed
I heard you like to get away
I heard you like to stay out late
I heard you had a couple boyfriends
I heard they didn't treat you right
I heard you're hated by your girlfriends
'Cause all the guys want you tonight, yeah
They say she's too hot, they say she's too cold
Where she came from, nobody really knows
They say she looks young but say she acts old
From everything I've heard she gets out of control
And all the boys say she was sent from the heavens
But I'm not too sure that this girl is a blessing
She's got the Devil's eyes and they'll cut you like a weapon
She's stuck in my mind like a bad obsession
Got bad intentions
She's got a body like a coke fiend
She likes to keep the party going
These rumors got me feeling lonely
I want that body, baby show me
She's got a body like a coke fiend
She likes to keep the party going
These rumors got me feeling lonely
I want that body, baby show me
I want that body, baby show me
She's got a body like a coke fiend
(She likes to keep the party going)
(These rumors got me feeling lonely)
(I want that body, baby show me)
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <iostream>
#include <string>
using namespace std;
int n;
void parth(string str, int k){
	if (k == 1){
		cout << str << endl;
        return;
	}
	for (int i = 0; i < n; i += (k-1)*2) cout << str[i];
	for (int j = 1; j < k - 1; j++){
		bool down = true;
		for (int i = j; i < n;)	{
			cout << str[i];
			if (down) i += (k-j-1)*2;
			else i += (k-1)*2 - (k-j-1)*2;
            down = !down;
		}
	}
    for (int i = k - 1; i < n; i += (k-1)*2) cout << str[i];
    cout << endl;
}

int32_t main(){
	int t;
    cin >> t;
    while(t--){
        int k;
        cin >> n >> k;
        string str;
        cin >> str;
        parth(str, k);
    }
	return 0;
}
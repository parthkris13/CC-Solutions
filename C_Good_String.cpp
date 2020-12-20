/*
 * 	i could never find the right way to tell you
 * 		have you noticed i've been gone?
 * 			cause i left behind the home that you made me
 * 				but i will carry it along
 * 	mm it's a long way forward
 * 		so trust in me
 * 			i'll give them shelter like you've done for me
 * 				and i know i'm not alone
 * 					you'll be watching over us
 * 						until you're gone
 * 	when i'm older i'll be silent beside you
 * 		I know that words are not enough
 * 			and they won't need to know our names or our faces
 * 				but they will carry on for us
 */
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main(){
    IOS
	int T = 1; 
	cin >> T;  
	for (int t = 0; t < T; ++t)
	{
		string s;
		cin >> s;
		int l = s.length();
		int ans = 0;
		for(char i = '0'; i <= '9'; ++i)
			for(char j = '0';j <= '9'; ++j)
			{
				int cnt = 0;
				bool flag = true;
				for(int x = 0; x < l; ++x)
				{
					if(s[x] == i && flag)
					{	
						flag = false;
						cnt++;
					}
					else if(s[x] == j && !flag)
					{	
						flag = true;
						cnt++;
					}
				}
				if(!flag && (i != j))
					cnt--;
				ans = max(ans, cnt);
			}
			cout << l - ans << "\n";
	}
 
	return 0;
}


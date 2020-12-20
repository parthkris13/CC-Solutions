#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int INF = (int)1e9 + (int)1e8;
const int N = 100100;
const int K = 7;
int n, m, k;
int a[N];
int dp[N][K][2];
 
void solve() {
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i <= m; i++)
		for (int j = 0; j <= k; j++)
			for (int h = 0; h < 2; h++)
				dp[i][j][h] = -INF;
	dp[0][0][0] = a[0];
	for (int i = 0; i < m; i++)
		for (int x = 0; x <= k; x++)
			for (int f = 0; f < 2; f++) {
				if (dp[i][x][f] == -INF) continue;
				for (int g = 0; g < 2; g++) {
					if (f & g) continue;
					if (x + g > k) continue;
					int pos = i + 1 - 2 * (x + g);
					if (pos < 0 || pos >= n) continue;
					dp[i + 1][x + g][g] = max(dp[i + 1][x + g][g], dp[i][x][f] + a[pos]);
				}
			}
	int ans = -INF;
	for (int i = 0; i <= k; i++)
		for (int j = 0; j < 2; j++)
			ans = max(ans, dp[m][i][j]);
	cout << ans << endl;
}
 
int32_t main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
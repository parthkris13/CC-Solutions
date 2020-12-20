/*She smiles, I cry.
She is outgoing, I am shy.
She loves, I am alone.
She is amazing, I am unknown.
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 100005;
int a[N], l[N], r[N], d[N], q[N], ans[N], x, y;
int32_t main()
{   
    IOS;
	int n, m, k;
	cin>> n >> m >> k;
	for(int i = 1 ; i <= n ; ++i)cin >> a[i];
	for(int i = 1 ; i <= m ; ++i)cin >> l[i] >> r[i] >> d[i];
	for(int i = 1 ; i <= k ; ++i)cin >> x >> y, q[x]++, q[y + 1]--;
	for(int i = 1 ; i <= m ; ++i)q[i] += q[i - 1], ans[l[i]] += d[i] * q[i], ans[r[i] + 1] -= d[i] * q[i];
	for(int i = 1 ; i <= n ; ++i)ans[i] += ans[i - 1], cout << ans[i] + a[i] << " ";
}
 	


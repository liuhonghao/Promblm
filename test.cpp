#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int n, m;
int r[N];
int d[N], s[N], t[N];
int temp[N];
bool check(int x)
{
	memset(temp, 0, sizeof temp);
	for (int i = 1; i <= x; i++)
	{
		temp[s[i]] += d[i];
		temp[t[i] + 1] -= d[i];
	}
	for (int i = 1; i <= n; i++)
	{
		temp[i] += temp[i - 1];
		if (temp[i] > r[i])return 0;
	}
	return 1;
}
int main()
{
	cin >> n >> m;
	for (int i = 1; i<=n; i++)cin >> r[i];
	for (int i = 1; i <= m; i++)cin >> d[i] >> s[i] >> t[i];
	if (check(m))
	{
		cout << 0;
		return 0;
	}
	int l = 1, r = m;
	while (l < r)
	{
		int mid = l + r >> 1;
		if (!check(mid))r = mid;
		else l = mid + 1;
	}
	cout << -1 << endl;
	cout << r;
	return 0;
}
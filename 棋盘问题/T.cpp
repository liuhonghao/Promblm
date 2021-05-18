#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;

int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };
typedef pair<int, int>PII;
#define fi first
#define sc second
const int N = 10000;
int n, m;
char g[N][N];
int ans;
bool st[N][N];
bool vis[N];
queue<PII>q;

void DFS(int row, int num)
{
	if (num == m)
	{
		ans++;
		return;
	}
	if (row > n)
	{
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (st[row][i] && !vis[i])
		{
			vis[i] = true;
			DFS(row + 1, num + 1);
			vis[i] = false;
		}
	}
	DFS(row + 1, num);
	return;
}
/*int bfs(int tx, int ty)
{
	q.push({ tx, ty });
	q.pop();
	int cnt = 0;
	while (!q.empty())
	{
		for (int i = 0; i < n; i++)
		{
			int x = tx + dx[i];
			int y = tx + dy[i];
			q.push({ x, y });
		}
	}
	return cnt;
}*/
int main()
{
	while (cin >> n >> m&&n != -1 && m != -1)
	{
		memset(st, false, sizeof(st));
		memset(vis, false, sizeof(vis));
		int idx = 0, idy = 0;
		ans = 0;
		for (int i = 1; i <=n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cin >> g[i][j];
				if (g[i][j] == '#')
				{
					idx = i;
					idy = j;
					st[i][j] = true;
					continue;
				}
			}
		}
		DFS(1, 0);
		cout << ans << endl;
		//cout << bfs(idx, idy) << endl;
	}

	return 0;
}
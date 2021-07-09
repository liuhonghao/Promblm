#define _CRT_SECURE_NO_WARNINGS 1

/*#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;

const int N = 2010;
int dist[N];
int g[N][N];
bool st[N];
int n;
int dijkstra()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;

	for (int i = 0; i < n; i++)
	{
		int t = -1;
		for (int j = 1; j <= n; j++)
		{
			if (!st[j] && (t == -1 || dist[t]>dist[j]))
			{
				t = j;
			}
		}
		st[t] = true;
		for (int j = 1; j <= n; j++)
		{
			dist[j] = min(dist[j], dist[t] + g[t][j]);
		}
	}
	return dist[n];
}
int main()
{
	int t;
	scanf("%d%d", &t, &n);
	memset(g, 0x3f, sizeof g);

	for (int i = 0; i < t; i++)
	{
		int a, b, w;
		scanf("%d%d%d", &a, &b, &w);
		if (g[a][b]>w)
		{
			g[a][b] = g[b][a] = w;//无向图
		}
	}
	int m = dijkstra();
	printf("%d\n", m);

	return 0;
}*/

/*#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 1010;
int n, m;
int g[N][N];
int dist[N];
bool st[N];

int dijkstra()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;

	for (int i = 0; i < n; i++)
	{
		int t = -1;
		for (int j = 1; j <= n; j++)
		{
			if (!st[j] && (t == -1 || dist[t]<dist[j]))
			{
				t = j;
			}
		}
		st[t] = true;

		for (int j = 1; j <= n; j++)
		{
			if (dist[j] < min(t, g[t][j]))
			{
				dist[j] = min(t, g[t][j]);
			}
		}
	}
	return dist[n];
}
int main()
{
	int t;
	scanf("%d", &t);
	memset(g, 0x3f, sizeof g);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d%d", &n, &m);
		int a, b, w;
		for (int j = 1; j <= m; j++)
		{
			scanf("%d%d%d", &a, &b, &w);
			g[a][b] = g[b][a] = w;
		}
		printf("Scenario #%d:\n", i);
		int t = dijkstra();
		printf("%d\n", t);
	}
	return 0;
}*/

/*#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 1005;
int n, m;
int g[N][N], dist[N];
bool vis[N];
void dijkstra()
{
	memset(vis, 0, sizeof(vis));
	for (int i = 1; i <= n; i++)
		dist[i] = g[1][i];
	vis[1] = true;
	for (int k = 1; k<n; k++)
	{
		int t = -1, u;
		for (int i = 1; i <= n; i++)
		{
			if (!vis[i] && dist[i]>t){//这里是大于号
				t = dist[i];
				u = i;
			}
		}
		vis[u] = true;
		for (int i = 1; i <= n; i++)
		{
			if (dist[i]<min(t, g[u][i]))//注意松弛条件
				dist[i] = min(t, g[u][i]);
		}
	}
	printf("%d\n\n", dist[n]);
}
int main(){
	int T, a,b, w;
	scanf("%d", &T);
	for (int k = 1; k <= T; k++)
	{
		scanf("%d%d", &n, &m);
		memset(g, 0, sizeof g);
		for (int i = 1; i <= m; i++)
		{
			scanf("%d%d%d", &a, &b, &w);
			g[a][b] = g[b][a] = w;//双向联通
		}
		printf("Scenario #%d:\n", k);
		dijkstra();
	}
	return 0;
}*/


/*#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 3; i <= n; i++)
	{
		for (int j = 2; j <= n; j++)
		{
			for (int k = j; k <= n; k++)
			{
				for (int d = k; d <= n; d++)
				{
					if (i*i*i == j*j*j + k*k*k + d*d*d)
					{
						printf("Cube = %d, Triple = (%d,%d,%d)\n", i, j, k, d);
					}
				}
			}
		}
	}
	return 0;
}*/
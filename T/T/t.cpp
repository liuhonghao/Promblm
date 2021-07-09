#define _CRT_SECURE_NO_WARNINGS 1

/*#include <iostream>
#include <algorithm>

using namespace std;

const int N = 56666;
int p[N];

int find(int x)
{
	if (p[x] != x)p[x] = find(p[x]);
	return p[x];
}

int main()
{
	int n, m; 

	cin.tie(0);
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
		{
			break;
		}
		for (int i = 0; i < n; i++) p[i] = i;
		for (int i = 0; i < m; i++)
		{
			int k, a, b;
			cin >> k >> a;
			for (int j = 1; j < k; j++)
			{
				cin >> b;

				p[find(a)] = find(b);
			}
		}
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (find(i) == find(0))
			{
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}*/

/*#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

const int N = 1010;
int p[N];
int vis[N];
int n,d;
int dx[N], dy[N];
int find(int x)
{
	if (p[x] != x) p[x] = find(p[x]);
	return p[x];
}

double dis(int a, int b)
{
	return sqrt(double(dx[a] - dx[b])*(dx[a] - dx[b]) + (dy[a] - dy[b])*(dy[a] - dy[b]));
}
int main()
{
	memset(vis, 0, sizeof vis);
	scanf("%d%d", &n,&d);
	for (int i = 0; i < n; i++) p[i] = i;
	for (int i = 0; i < n; i++) scanf("%d %d", &dx[i], &dy[i]);

	char op[2];
	int x, y, len = 0;
	while (~scanf("%s", op))
	{
		if (op[0] == 'O')
		{
			scanf("%d", &x);
			x--; 
			vis[len++] = x;
			for (int i = 0; i < len - 1; i++)
			{
				if (vis[i] != x && dis(vis[i], x) <= (double)d)
				{
					p[find(vis[i])] = find(x);
				}
			}
			
		}
		else if (op[0] == 'S')
		{
			scanf("%d %d", &x, &y);
			x--, y--;
			if (find(x) == find(y))
				puts("SUCCESS");
			else puts("FAIL");
		}
		else
			break;
	}

	return 0;
}*/

/*#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
	return b ? gcd(b, a%b) : a;
}
int lcm(int a, int b)
{
	return a*b / gcd(a, b);
}
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << lcm(a, b) << endl;
	}
	return 0; 
}*/

/*#include <iostream>
using namespace std;

typedef long long LL;
LL gcd(LL a, LL b)
{
	return b ? gcd(b, a%b) : a;
}
LL lcm(LL a, LL b)
{
	return a*b / gcd(a, b);
}
int main()
{
	LL m;
	cin >> m;
	while (m--)
	{
		LL n;
		cin >> n;
		LL temp;
		LL sum;
		scanf("%lld", &sum);
		if (sum == 0);
		else
		{
			for (int i = 1; i<n; i++)
			{
				scanf("%lld", &temp);
				if (temp == 0)
				{
					sum = 0;
					break;
				}
				sum = lcm(sum, temp);
			}
		}
		printf("%lld\n", sum);

	}
	return 0;
}*/

/*#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;
		int t = a % 4;
		if (a % 4 == 0)t = 4;
		a %= 10;
		cout << (int)pow(a, t) % 10 << endl;
	}
	return 0;
}*/

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
string s;
int main()
{
	int left = 0, right = 0;
	getline(cin, s);
	for (auto c : s)
	{
		if (c == '(') left++;
		if (c == ')')right++;
	}
	if (left == right) puts("YES");
	else puts("NO");
	return 0;
}
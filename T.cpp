#define _CRT_SECURE_NO_WARNINGS 1


#include <bits/stdc++.h>
#define mod(x) (((x)>=k)?((x)-k):(x))
using namespace std;

typedef long long LL;
const int N = 2021;

LL c[N][N];
LL n, m;
LL k, t;

void init()
{
	c[0][0] = 1;
	for (int i = 1; i < N; i++)
	{
		c[i][0] = 1 % k;
		for (int j = 1; j <= i; j++)
		{
			c[i][j] = mod(c[i - 1][j] + c[i - 1][j - 1]);
		}
	}
	for (int i = 0; i<N; i++){
		for (int j = 0; j <= i; j++){
			if (c[i][j] == 0) c[i][j] = 1;
			else c[i][j] = 0;
		}
	}
	///将二维数组C处理成区间前缀和
	for (int i = 1; i<N; i++){
		int s = 0;
		for (int j = 0; j<N; j++){
			s += c[i][j];
			c[i][j] = c[i - 1][j] + s;
		}
	}
}
int main()
{
	scanf("%lld%lld", &t, &k);
	init();
	while (t--)
	{
		scanf("%lld%lld", &n, &m);
		printf("%lld\n", c[n][m]);
	}
	return 0;
}
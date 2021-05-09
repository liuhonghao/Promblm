#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL a, b, c, d;
void binary_sech(double l, double r)
{
	double mid = (l + r) / 2;
	double ans = a*mid*mid*mid + b*mid*mid + c*mid + d;
	if (l == r)
	{
		printf("%.3lf\n", r);
		return;
	}
	else if (abs(ans)<0.001)
	{
		printf("%.3lf\n", mid);
		return;
	}

	if (ans>0)
	{
		binary_sech(l, mid);
	}
	else if (ans < 0)
	{
		binary_sech(mid, r);
	}
	else
	{
		printf("%.3lf\n", mid);
	}
}
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		cin >> a >> b >> c >> d;
		binary_sech(-1000, 0);
	}
	return 0;
}
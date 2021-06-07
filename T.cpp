#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 1e6 + 10;
int q[N];

/*int binarySearch(int q[], int l, int r, int k)
{
	if (l == r)
	{
		if (q[l] == k)
		{
			return l;
		}
		else return -1;
	}
	int mid = l + r >> 1;
	if (k <= q[mid])//最中间的数大于k k在左边;
	{
		binarySearch(q, l, mid, k);
	}
	else
	{
		binarySearch(q, mid + 1, r, k);
	}
}*/

int binarySearch(int q[], int l, int r, int k)
{
	while (l < r)
	{
		int mid = l + r >> 1;
		if (k <= q[mid]) r = mid;
		else l = mid + 1;
	}
	if (q[l] == k) return l;
	else return -1;
}
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> q[i];
	}
	while (m--)
	{
		int k;
		cin >> k;
		cout << binarySearch(q, 1, n, k) << ' ';
	}
	return 0;
}
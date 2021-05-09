#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;
const int N = 2e6 + 10;
int q[N], temp[N];
int n;
int res;
void merge_sort(int l, int r)
{
	if (l > r)return;
	if (l == r)
	{
		printf("%d\n", q[l]);
		return;
	}
	int mid = l + r >> 1;
	merge_sort(l, mid);
	merge_sort(mid + 1, r);
	int k = 0, i = l, j = mid + 1;
	while (i <= mid&&j <= r)
	{
		if (q[i]<q[j])temp[k++] = q[i++];
		else temp[k++] = q[j++];
	}
	while (i <= mid)temp[k++] = q[i++];
	while (j <= r)temp[k++] = q[j++];
	for (int i = l, j = 0; i <= r;)q[i++] = temp[j++];
	printf("%d\n", q[mid]);
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) cin >> q[i];
	merge_sort(0, n - 1);
	return 0;
}
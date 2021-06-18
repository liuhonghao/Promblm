#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 2e5 + 10;

int n, m;
int a[N];

int main()
{
	while (cin >> n >> m)
	{
		for (int i = 0; i < n + m; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n + m);
		cout << a[0];
		for (int i = 1; i < n + m; i++)
		{
			if (a[i] == a[i - 1])
			{
				continue;
			}
			else cout << ' ' << a[i];
		}
		cout << endl;
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>

using namespace std;

typedef long long LL; 
int x;
LL dfs(int u)
{
	if (u == 0) return 1;
	if (u == 1) return 1;
	LL res = u*dfs(u - 1);
	return res;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> x;
		cout << dfs(x) << endl;
	}
	return 0;
}
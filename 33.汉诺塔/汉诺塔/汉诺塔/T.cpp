#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%c-->%c\n", A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		printf("%c-->%c\n", A, C);
		hanoi(n - 1, B, A, C);
	}
}
int main()
{
	int n;
	while (cin >> n, n)
	{
		hanoi(n, 'A', 'B', 'C');
		cout << endl;
	}
	return 0;
}
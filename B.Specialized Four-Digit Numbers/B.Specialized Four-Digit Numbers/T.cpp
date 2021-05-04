#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cstdio>
using namespace std;

int mod(int n, int b)
{
	int sum = 0;
	while (n)
	{
		sum += n%b;
		n /= b;
	}
	return sum;
}
int main()
{
	for (int i = 2292; i < 10000; i++)
	{
		if (mod(i, 10) == mod(i, 12) && mod(i, 10) == mod(i, 16))
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
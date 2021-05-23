#define _CRT_SECURE_NO_WARNINGS 1

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 110;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		char a[N], b[N];
//		cin >> a;
//		int l1 = 0;
//		for (int i = 0,j = 0; i < strlen(a); i++)
//		{
//			if (a[i] == '0')
//			{
//				b[j++] = '0';
//				l1 = 0;
//			}
//			else if (a[i] == '1'&& l1 != 4)
//			{
//				b[j++] = '1';
//				l1++;
//			}
//			else if (a[i] == '1' &&l1 == 4)
//			{
//				b[j++] = '1';
//				l1 = 0;
//				i++;
//			}
//		}
//		//cout << b << endl;
//		printf("%s\n", b);
//	}
//	return 0;
//}

/*#include<iostream>
#include<cstring>
using namespace std;

const int N = 110;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		char str[N];
		cin >> str;
		int cnt = 0;
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] == '1')
			{
				cnt++;
				cout << str[i];
				if (cnt == 5)
				{
					i++;
					cnt = 0;
				}
			}
			else
			{
				cout << str[i];
				cnt = 0;
			}
		}
		puts("");
	}
	return 0;
}*/



/*#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;
int main()
{
	int T;
	LL n, m;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%lld%lld", &n, &m);
		LL cnt = 0;
		for (LL i = 1; i <= n; i++)
		{
			for (LL j = 1; j <= n; j++)
			{
				if (i*j == m)
				{
					cnt++;
				}
			}
		}
		printf("%lld\n", cnt);
	}
	return 0;
}*/



#include<iostream>
using namespace std;

int main()
{
	int T,n, m;
	int i;
	cin >> T;
	while (T--)
	{
		cin >> n >> m;
		int cnt = 0;
		for (i = 1; i <= n; i++)
		{
			if (m%i == 0 && m / i <= n)
				cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
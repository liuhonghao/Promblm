#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
char str[N], p[N];
int Next[N];
int cnt;

void getFail(char *p, int plen)
{
	Next[0] = 0;
	Next[1] = 1;
	for (int i = 1; i < plen; i++)
	{
		int j = Next[i];
		while (j&&p[i] != p[j])j = Next[j];
		Next[i + 1] = (p[i] == p[j]) ? j + 1 : 0;
	}
}
void kmp(char* s, char *p)
{
	int last = -1;
	int slen = strlen(s), plen = strlen(p);
	getFail(p, plen);
	int j = 0;
	for (int i = 0; i < slen; i++)
	{
		while (j&&s[i] != p[j]) j = Next[j];
		if (s[i] == p[j])j++;
		if (j == plen)
		{
			if (i - last >= plen)
			{
				cnt++;
				last = i;
			}
		}
	}
}
int main()
{
	while (~scanf("s", str))
	{
		if (str[0] == '#')break;
		scanf("%s", p);
		cnt = 0;
		kmp(str, p);
		printf("%d\n", cnt);
	}
	return 0;
}
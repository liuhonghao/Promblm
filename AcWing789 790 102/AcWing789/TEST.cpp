#define _CRT_SECURE_NO_WARNINGS 1

/*
给定一个按照升序排列的长度为 n 的整数数组，以及 q 个查询。

对于每个查询，返回一个元素 k 的起始位置和终止位置（位置从 0 开始计数）。

如果数组中不存在该元素，则返回 -1 -1。

输入格式
第一行包含整数 n 和 q，表示数组长度和询问个数。

第二行包含 n 个整数（均在 1∼10000 范围内），表示完整数组。

接下来 q 行，每行包含一个整数 k，表示一个询问元素。

输出格式
共 q 行，每行包含两个整数，表示所求元素的起始位置和终止位置。

如果数组中不存在该元素，则返回 -1 -1。

数据范围
1≤n≤100000
1≤q≤10000
1≤k≤10000
输入样例：
6 3
1 2 2 3 3 4
3
4
5
输出样例：
3 4
5 5
-1 -1
来源：模板题,AcWing
*/
//#include <bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//int n, q[N],m;
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)cin >> q[i];
//	while (m--)
//	{
//		int x;
//		cin >> x;
//		int l = 0, r = n - 1;
//		while (l < r)
//		{
//			int mid = l + r >> 1;
//			if (q[mid] >= x)r = mid;
//			else l = mid + 1;
//		}
//		if (q[l] != x)cout << "-1 -1" << endl;
//		else
//		{
//			cout << l << ' ';
//			int l = 0, r = n - 1;
//			while (l < r)
//			{
//				int mid = l + r + 1 >> 1;
//				if (q[mid] <= x)l = mid;
//				else r = mid - 1;
//			}
//			cout << l << endl;
//		}
//	}
//	return 0;
//}
/*给定一个浮点数 n，求它的三次方根。

输入格式
共一行，包含一个浮点数 n。

输出格式
共一行，包含一个浮点数，表示问题的解。

注意，结果保留 6 位小数。

数据范围
−10000≤n≤10000
输入样例：
1000.00
输出样例：
10.000000
*/
//#include <bits/stdc++.h>
//using namespace std;
//
//double n;
//int main()
//{
//	cin >> n;
//	double l = -10000, r = 10000;
//	while (r - l > 1e-8)
//	{
//		double mid = (l + r) / 2;
//		if (mid*mid*mid >= n) r = mid;
//		else l = mid;
//	}
//	printf("%lf\n", l);
//	return 0;
//}

/*
农夫约翰的农场由 N 块田地组成，每块地里都有一定数量的牛，其数量不会少于 1 头，也不会超过 2000 头。

约翰希望用围栏将一部分连续的田地围起来，并使得围起来的区域内每块地包含的牛的数量的平均值达到最大。

围起区域内至少需要包含 F 块地，其中 F 会在输入中给出。

在给定条件下，计算围起区域内每块地包含的牛的数量的平均值可能的最大值是多少。

输入格式
第一行输入整数 N 和 F，数据间用空格隔开。

接下来 N 行，每行输入一个整数，第 i+1 行输入的整数代表第 i 片区域内包含的牛的数目。

输出格式
输出一个整数，表示平均值的最大值乘以 1000 再 向下取整 之后得到的结果。

数据范围
1≤N≤100000
1≤F≤N
输入样例：
10 6
6
4
2
10
3
8
5
9
4
1
输出样例：
6500
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	return 0;
}
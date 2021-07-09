#define _CRT_SECURE_NO_WARNINGS 1

/*#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;
typedef long long LL; 
int main()
{
	LL a;
	cin >> a;
	printf("%lld %08x\n",a,a);
	LL y = a * 16;
	printf("%lld %08x",y, y);
	return 0;
}*/

/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int>v;
int main()
{
	int a, b, c;
	while (cin >> a >> b >> c)
	{
		v.clear();
		v.push_back(a), v.push_back(b), v.push_back(c);
		sort(v.begin(), v.end());
		cout << v[0] << "->" << v[1] << "->" << v[2] << endl;
	}
	return 0; 
}*/

/*#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a;
	char c;
	while (cin >> a >> c)
	{

		int l = (a+1) / 2;//上取整
		for (int i = 0; i < l; i++)
		{
			for (int j = 0; j < a; j++)
			{
				cout << c;
			}
			cout << endl;
		}
	}
	return 0;
}*/

/*#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
	cout << "13+14=27" << endl;
	cout << "13+14=   27" << endl;
	cout << "13%+14%=27%" << endl;
	cout << "13.35+14.13=27.480000" << endl;
	cout << "13.35+14.13=27.48" << endl;
	cout << "13.35+14.13= 27.480" << endl;

	return 0;
}*/

/*13 + 14 = 27
13 + 14 = 27
13 % +14 %= 27 %
13.35 + 14.13 = 27.480000
13.35 + 14.13 = 27.48
13.35 + 14.13 = 27.480*/

/*#include <iostream>

using namespace std;
typedef long long LL;

LL f(int n)
{
	if (n == 1)return 1;
	else if (n == 2)return 2;
	else return n*f(n - 1);
}
int main()
{
	int n;
	while (cin >> n)
	{ 
		LL sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += f(i);
		}
		cout << sum << endl; 
	}
	return 0;
}*/

/*#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int m;
	cin >> m;
	while (m--)
	{
		int x;
		cin >> x;
		printf("2^%d = %.0lf\n", x, pow(2, x));
	}
	return 0;
}*/

/*#include<iostream>
#include<algorithm>
using namespace std;

typedef long long LL;
LL qmi(int a, int b)
{
	LL res = 1%10;
	while (b)
	{
		if (b & 1) res = res*a%10;
		a = a*(LL)a%10;
		b >>= 1;
	}
	return res;
}
int main()
{
	int t;
	while (cin >> t)
	{
		while (t--)
		{
			int n;
			cin >> n;
			int iend = qmi(n, n);
			cout << iend << endl;
		}
	}
	return 0;
}
*/

/*#include <iostream>
#include <algorithm>

using namespace std;
int a, b;

int qmi(int a, int b)
{
	int res = 1;
	while (b)
	{
		if (b & 1){
			res = res*a % 1000;
		}
		b >>= 1;
		a = a*a % 1000;
	}
	return res;
}
int main()
{
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0) break;
		cout << qmi(a, b) << endl;
	}
	return 0;
}*/



/*#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		//n=0时 f0 % 3 = 1
		//n=1时 f1 % 3 = 2
		//n=2时 f2 = f1+f0 =18 % 3 =0
		//n=3时 f3 = f2+f1 = 29 % 3 = 2
		//n=4时 f4 = f3+f2 = 47 %3 =2
		//n=5 f5 = f4+f3 %3= 1
		//n=6 f6 = f5+f4 %3 =0
		//n=7 f7 = f6+f5 %3=1
		//n=8 f8 = f7+f6 %3 =0
		//n=9 f9 = f8+f7 %3 =1
		//n=10 f10 =f9 +f8 %3 =2
		n %= 8;
	    if (n == 2 || n == 6)printf("yes\n");
	    else printf("no\n");
 	}
	return 0;
}*/

/*#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;
const int N = 1e5 + 10;
int a[N]; 
int binary(int l, int r,int x)
{
	while (l < r)
	{
		int mid = l + r >> 1;
		if (a[mid] >= x) r = mid;
		else l = mid + 1;
	}
	return a[l];
}
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	while (m--)
	{
		int x;
		cin >> x;
		int t = binary(0, n - 1, x);
		if (t==x) puts("YES");
		else puts("NO");
	}
	return 0;
}*/
/*#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double f(double x)
{
	return 8 * pow(x, 4) + 7 * pow(x, 3) + 2 * x*x + 3 * x+ 6;//单调递增函数
}

double binary(double y)
{
	double l = 0.0, r = 100.0;
	double mid = (l + r) / 2;
	while (fabs(f(mid) - y) > 1e-5)
	{
		if (f(mid) > y)
		{
			r = mid;
			mid = (l + r) / 2;
		}
		else if (f(mid) < y)
		{
			l = mid;
			mid = (l + r) / 2;
		}
	}
	return mid;
}
int main()
{
	int t;
	cin >> t;
	double y;

	while (t--)
	{
		cin >> y;
		if (f(0) > y || f(100) < y)
		{
			printf("No solution!\n");
			continue;
		}
		else   printf("%.4lf\n", binary(y));
	}
	return 0;
}*/

#include <iostream>
#include <algorithm>
using namespace std;
int a[] = { 1, 4, 7, 6, 5, 6, 3, 6, 9, 0, 1, 6, 3, 6, 5, 6, 7, 4, 9, 0 };
int main()
{
	//n=1 1的1次方 = 1 末位为1
	//n=2 2的2次方 = 4 末位为4
	//n=3 3的3次方 = 27 末位为7
	//n=4 4的4次方 = 256 末位为6
	//n=5 5的5次方 = 3125 末位为5
	//n=6 6的6次方 = 46656 末位为6
	//n=7 7的7次方 = 823543 末位为3
	//n=8 8的8次方  末位为6
	//n=9 9的9次方  末位为9
	//………………
	int n;
	cin >> n;
	int t = (n - 1) % 20;
	cout << a[t] << endl;
	return 0;
}

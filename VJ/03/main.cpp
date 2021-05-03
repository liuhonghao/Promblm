#include <bits/stdc++.h>

using namespace std;
int main()
{
    int m,n;
    cin>>m;
    while(m--)
    {
        cin>>n;
        double sum = 0;
        int sign = 1;
        for(int i=1;i<=n;i++)
        {
            sum = sum+sign*1.0/i;
            sign = -sign;
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}
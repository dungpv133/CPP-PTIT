#include <bits/stdc++.h>
using namespace std;

long long six(long long n)
{
	long long temp = n;
	int count = 0;
	while(n > 0)
	{
		int num = n % 10;
		if(num == 5)
		{
			temp += pow(10, count);
		}
		count++;
		n /= 10;
	}
	return temp;
}
long long five(long long n)
{
	long long temp = n;
	int count = 0;
	while(n > 0)
	{
		int num = n % 10;
		if(num == 6)
		{
			temp -= pow(10, count);
		}
		count++;
		n /= 10;
	}
	return temp;
}
int main()
{
		long long a, b;
		cin >> a >> b;
		long long a1 = five(a), a2 = six(a), b1 = five(b), b2 = six(b);
		long long sum_min = a1 + b1, sum_max = a2 + b2;
		cout << sum_min << " " << sum_max << endl;
	return 0;
}

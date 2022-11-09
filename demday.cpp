#include <bits/stdc++.h>
using namespace std;
long long du = 123456789;

long long mu(long long n)
{
	if(n == 0)
	{
		return 1;
	}
	if(n == 1)
	{
		return 2;
	}
	long long temp = mu(n / 2);
	if(n % 2 == 0)
	{
		return (temp % du * temp % du) % du;
	}
	return (temp % du * temp % du * 2 % du) % du;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long n;
		cin >> n;
		long long res = mu(n - 1);
		cout << res << endl;
	}
	return 0;
}

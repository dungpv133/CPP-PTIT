#include <bits/stdc++.h>
using namespace std;
long long modulo = 1000000007;

long long sodao(long long n)
{
	long long kq = 0;
	while(n > 0)
	{
		kq = kq * 10 + n % 10;
		n /= 10;
	}
	return kq;
}
long long luythua(long long n, long long m)
{
	if(m == 0)
	{
		return 1;
	}
	long long p = luythua(n, m / 2);
	if(m % 2 == 0)
	{
		return (p % modulo * p % modulo) % modulo;
	}
	return (p % modulo * p % modulo * n % modulo) % modulo;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long n;
		cin >> n;
		long long m = sodao(n);
		cout << luythua(n, m) << endl;
	}
	return 0;
}

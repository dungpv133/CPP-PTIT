#include <bits/stdc++.h>
using namespace std;
long long n, mod = 1e9 + 7;
long long f[2][2], m[2][2];

void init()
{
	cin >> n;
	f[0][1] = f[1][0] = f[0][0] = 1;
	f[1][1] = m[1][1] = 0;
	m[0][1] = m[1][0] = m[0][0] = 1;
}
void nhan(long long a[2][2], long long b[2][2])
{
	long long x = (a[0][0] * b[0][0] % mod + a[0][1] * b[1][0] % mod) % mod;
	long long y = (a[0][0] * b[0][1] % mod + a[0][1] * b[1][1] % mod) % mod;
	long long z = (a[1][0] * b[0][0] % mod + a[1][1] * b[1][0] % mod) % mod;
	long long t = (a[1][0] * b[0][1] % mod + a[1][1] * b[1][1] % mod) % mod;
	f[0][0] = x;
	f[0][1] = y;
	f[1][0] = z;
	f[1][1] = t;
}
void mu(long long f[2][2], long long n)
{
	if(n <= 1)
		return;
	mu(f, n / 2);
	nhan(f, f);
	if(n & 1)
		nhan(f, m);
}
void solve()
{
	if(n == 0)
	{
		cout << "0" << endl;
		return;
	}
	else
	{
		mu(f, n - 1);
		cout << f[0][0] << endl;
	}
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		init();
		solve();
	}
	return 0;
}

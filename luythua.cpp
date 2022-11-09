#include <bits/stdc++.h>
using namespace std;
long long m = 1000000007;

long long giaithua(int n, long long k)
{
	if(k == 0)
	{
		return 1;
	}
	long long temp = giaithua(n, k / 2);
	if(k % 2 == 0)
	{
		return temp * temp % m;
	}
	return n * (temp * temp % m) % m;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		long long k;
		cin >> n >> k;
		cout << giaithua(n, k) << endl;
	}
	return 0;
}

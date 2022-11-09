#include <bits/stdc++.h>
using namespace std;
#define modulo 1000000007

long long tohop(int n, int k)
{
	long long temp = 1;
	for(int i = 1; i <= k; i++, n--)
	{
		temp = ((temp % modulo) * n / i) ;
	}
	return temp;
}
int main()
{
	int t, n, m;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		int sum = n + m;
		long long kq = tohop(sum, n);
		cout << kq << endl;
	}
	return 0;
}

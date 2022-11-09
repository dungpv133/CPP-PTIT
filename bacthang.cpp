#include <bits/stdc++.h>
using namespace std;
long long m = 1000000007;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n, k;
		cin >> n >> k;
		long long f[n + 9];
		memset(f, 0, sizeof(f));
		f[0] = 1;
		f[1] = 1;
		for(int i = 2; i <= n; i++)
		{
			int temp = min(i, k);
			for(int j = 1; j <= temp; j++)
			{
				f[i] += f[i - j];
				f[i] %= m;
			}
		}
		cout << f[n] << endl;
	}
	return 0;
}

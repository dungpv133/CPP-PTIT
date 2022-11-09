#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n, m;
		cin >> n >> m;
		int a[n + 9], c[n + 9];
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		for(int i = 1; i <= n; i++)
		{
			cin >> c[i];
		}
		int f[n + 9][n + 9];
		memset(f, 0, sizeof(f));
		int res = 0;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
			{
				if(a[i] > j)
				{
					f[i][j] = f[i - 1][j];
				}
				else
				{
					f[i][j] = max(f[i - 1][j], f[i - 1][j - a[i]] + c[i]);
				}
				res = max(res, f[i][j]);
			}
		}
		cout << res << endl;
	}
	return 0;
}

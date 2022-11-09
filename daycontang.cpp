#include <bits/stdc++.h>
using namespace std;

int main()
{
		int n;
		cin >> n;
		int a[n + 9], b[n + 9];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		memset(b, 0, sizeof(b));
		int res = 0;
		for(int i = 1; i <= n; i++)
		{
			b[i] = 1;
			for(int j = 1; j < i; j++)
			{
				if(a[i] > a[j])
				{
					b[i] = max(b[j] + 1, b[i]);
				}
			}
			res = max(res, b[i]);
		}
		cout << res << endl;
	return 0;
}

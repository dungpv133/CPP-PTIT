#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		long long a[n + 9];
		memset(a, 0, sizeof(a));
		a[0] = a[1] = 1;
		for(int i = 2; i <= n; i++)
		{
			int temp = min(i, 3);
			for(int j = 1; j <= temp; j++)
			{
				a[i] += a[i - j];
			}
		}
		cout << a[n] << endl;
	}
	return 0;
}

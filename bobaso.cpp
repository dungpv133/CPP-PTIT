#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		long long k;
		cin >> n >> k;
		long long a[n + 9];
		for(long long i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		long long count = 0;
		for(long long i = 0; i < n - 2; i++)
		{
			for(long long j = i + 1; j < n - 1; j++)
			{
				long long m = n - 1;
				while(m > j)
				{
					if(a[i] + a[j] + a[m] < k)
					{
						count += m - j;
						break;
					}
					else
					{
						m--;
					}
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}

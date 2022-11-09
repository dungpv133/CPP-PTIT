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
		long long a[n + 9], sum[n + 9];
		sum[0] = 0;
		bool check = false;
		for(long long i = 1; i <= n; i++)
		{
			cin >> a[i];
			sum[i] = sum[i - 1] + a[i];
		}
		if(k == 0)
		{
			for(long long i = 1; i <= n; i++)
			{
				if(a[i] == 0)
				{
					check = true;
					break;
				}
			}
		}
		else
		{
			for(long long i = 0; i <= n; i++)
			{
				if(binary_search(sum, sum + n + 1, sum[i] + k))
				{
					check = true;
					break;
				}
			}
		}
		if(check)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}

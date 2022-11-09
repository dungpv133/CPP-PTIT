#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n, a[109];
		cin >> n;
		bool check = false;
		int neg;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(i == 0)
			{
				neg = a[i];
			}
			if(a[i] > 0)
			{
				check = true;
			}
			if(a[i] > neg)
			{
				neg = a[i];
			}
		}
		if(!check)
		{
			cout << neg << endl;
			continue;
		}
		int sum = 0, res = 0;
		for(int i = 0; i < n; i++)
		{
			if(a[i] + sum < 0)
			{
				sum = 0;
			}
			else
			{
				sum += a[i];
				if(sum > res)
				{
					res = sum;
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}

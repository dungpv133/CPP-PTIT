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
		int x[n + 9], y[m + 9];
		for(int i = 0; i < n; i++)
		{
			cin >> x[i];
		}
		for(int i = 0; i < m; i++)
		{
			cin >> y[i];
		}
		sort(x, x + n);
		sort(y, y + m);
		long long count = 0;
		for(int i = 0; i < m; i++)
		{
			if(y[i] == 1)
			{
				for(int j = 0; j < n; j++)
				{
					if(x[j] > 1)
					{
						count++;
					}
				}
			}
		}
		int pos = 0;
		while(pos < n)
		{
			long long temp = 0;
			for(int i = 0; i < m; i++)
			{
				if(pow(x[pos], y[i]) > pow(y[i], x[pos]) && y[i] != 1)
				{
					temp++;
				}
			}
			if(temp > 0)
			{
				count = count + temp * (n - pos);
				break;
			}
			pos++;
		}
		cout << count << endl;
	}
	return 0;
}

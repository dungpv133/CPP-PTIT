#include <bits/stdc++.h>
using namespace std;
#define modulo 1000000007

int main()
{
	int t, n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		long long a[n + 9];
		for(long long i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		long long sum = 0, temp = 0;
		for(long long i = 0; i < n; i++)
		{
			temp += a[i];
			if(temp <= 0)
			{
				temp = 0;
			}
			else
			{
				sum = max(sum, temp);
			}
		}
		cout << sum << endl;
	}
	return 0;
}

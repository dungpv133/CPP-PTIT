#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long n, x;
		cin >> n >> x;
		long long a[n + 9];
		long long pos = 0;
		for(long long i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i] <= x && a[i] > a[pos])
			{
				pos = i;
			}
		}
		if(a[0] > x)
		{
			cout << "-1" << endl;
			continue;
		}
		cout << pos + 1 << endl;
	}
	return 0;
}

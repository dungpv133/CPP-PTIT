#include <bits/stdc++.h>
using namespace std;
long long n;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		cin >> n;
		long long a[n + 9], b[n + 9];
		for(long long i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		bool check = false;
		long long res;
		for(long long i = 1; i < n; i++)
		{
			cin >> b[i];
			if(a[i] != b[i] && !check)
			{
				res = i;
				check = true;
			}
		}
		cout << res << endl;
	}
	return 0;
}

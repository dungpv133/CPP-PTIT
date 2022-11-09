
#include <bits/stdc++.h>
using namespace std;
long long m = 1e9 + 7;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		int a[n + 9];
		long long sum = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		for(int i = 0; i < n; i++)
		{
			sum += a[i] * i;
			sum %= m;
		}
		cout << sum << endl;
	}
	return 0;
}

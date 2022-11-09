#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long n;
		cin >> n;
		long long a[n + 9], b[n + 9];
		for(long long i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(long long i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + n, std :: greater <long long>());
		long long sum = 0;
		for(int i = 0; i < n; i++)
		{
			sum = sum + a[i] * b[i];
		}
		cout << sum << endl;
	}
	return 0;
}

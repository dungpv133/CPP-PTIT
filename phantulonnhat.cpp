#include <bits/stdc++.h>
using namespace std;


long long find(long long a[], int k, long long pos)
{
	long long res = a[pos];
	for(long long i = pos + 1; i < pos + k; i++)
	{
		if(a[i] > res)
		{
			res = a[i];
		}
	}
	return res;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n, k;
		cin >> n >> k;
		long long a[n + 9];
		for(long long i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(long long i = 0; i < n - k + 1; i++)
		{
			cout << find(a, k, i) << " ";
		}
		cout << endl;
	}
	return 0;
}

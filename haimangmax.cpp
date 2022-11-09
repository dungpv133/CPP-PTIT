#include <bits/stdc++.h>
using namespace std;


void solve(int a[], int n, int k)
{
	sort(a, a + n);
	if(k <= n / 2)
	{
		int left = 0, right = 0;
		for(int i = 0; i < n; i++)
		{
			if(i < k)
			{
				left += a[i];
			}
			else
			{
				right += a[i];
			}
		}
		cout << right - left << endl;
	}
	else
	{
		int left = 0, right = 0;
		for(int i = 0; i < n; i++)
		{
			if(i < n - k)
			{
				left += a[i];
			}
			else
			{
				right += a[i];
			}
		}
		cout << right - left << endl;
	}
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n, k;
		cin >> n >> k;
		int a[n + 9];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		solve(a, n, k);
	}
	return 0;
}

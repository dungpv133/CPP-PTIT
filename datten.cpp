#include <bits/stdc++.h>
using namespace std;
int n, k, a[18];

void result()
{
	for(int i = 1; i <= k; i++)
	{
		char chu = 64 + a[i];
		cout << chu;
	}
	cout << endl;
	a[0] = 0;
}
void init()
{
	cin >> n >> k;
	for(int i = 1; i <= k; i++)
	{
		a[i] = i;
	}
}
void solve(int i)
{
	for(int j = a[i - 1] + 1; j <= n - k + i; j++)
	{
		a[i] = j;
		if(i == k)
		{
			result();
		}
		else
		{
			solve(i + 1);
		}
	}
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		init();
		solve(1);
	}
	return 0;
}

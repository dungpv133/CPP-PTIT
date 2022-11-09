#include <bits/stdc++.h>
using namespace std;
int n, a[20], K;

void init()
{
	for(int i = 1; i <= n; i++)
	{
		a[i] = 0;
	}
}
void result()
{
	for(int i = 1; i <= n; i++)
	{
		cout << a[i];
	}
	cout << endl;
}
int sum(int k)
{
	int count = 0;
	for(int i = 1; i <= k; i++)
	{
		count += a[i];
	}
	return count;
}
void solve(int j)
{
	for(int i = 0; i < 2; i++)
	{
		if(sum(j - 1) + i <= j && sum(j) + i + n - j >= K)
		{
			a[j] = i;
			if(j == n)
			{
				if(sum(n) == K)
				{
					result();
				}
			}
			else
			{
				solve(j + 1);
			}
		}
	}
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		cin >> n >> K;
		init();
		solve(1);
		cout << endl;
	}
	return 0;
}

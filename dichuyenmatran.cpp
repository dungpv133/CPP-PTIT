#include <bits/stdc++.h>
using namespace std;
int a[50][50], n, m, dem;

void init()
{
	cin >> m >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
	}
	dem = 0;
}
void solve(int i, int j)
{
	if(i == n && j == m)
	{
		dem++;
		return;
	}
	if(i < n)
	{
		solve(i + 1, j);
	}
	if(j < m)
	{
		solve(i, j + 1);
	}
	if(i > n || j > m)
	{
		return;
	}
}

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		init();
		solve(1, 1);
		cout << dem << endl;
	}
	return 0;
}

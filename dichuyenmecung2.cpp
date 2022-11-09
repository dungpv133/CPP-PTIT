#include <bits/stdc++.h>
using namespace std;
int a[100][100], n;
int b[100][100];
vector <string> res;

void solve(int i, int j, string temp)
{
	if(a[1][1] == 0 || a[n][n] == 0)
	{
		return;
	}
	if(i == n && j == n)
	{
		res.push_back(temp);
	}
	if(a[i + 1][j] && i != n && !b[i + 1][j])
	{
		b[i][j] = 1;
		solve(i + 1, j, temp + "D");
		b[i][j] = 0;
	}
	if(a[i][j + 1] && j != n && !b[i][j + 1])
	{
		b[i][j] = 1;
		solve(i, j + 1, temp + "R");
		b[i][j] = 0;
	}
	if(a[i][j - 1] && j != 1 && !b[i][j - 1])
	{
		b[i][j] = 1;
		solve(i, j - 1, temp + "L");
		b[i][j] = 0;
	}
	if(a[i - 1][j] && i != 1 && !b[i - 1][j])
	{
		b[i][j] = 1;
		solve(i - 1, j, temp + "U");
		b[i][j] = 0;
	}
}

void giai()
{
	res.clear();
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			b[i][j] = 0;
		}
	}
	solve(1, 1, "");
	if(res.size() == 0)
	{
		cout << -1;
	}
	else
	{
		sort(res.begin(), res.end());
		for(int i = 0; i < res.size(); i++)
		{
			cout << res[i] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		giai();
	}
	return 0;
}

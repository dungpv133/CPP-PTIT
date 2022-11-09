#include <bits/stdc++.h>
using namespace std;
int a[50][50], n;
vector <string> res;
bool check;

void init()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	res.clear();
	check = false;
}
void solve(int i, int j, string temp)
{
	if(i == n && j == n && a[n][n])
	{
		res.push_back(temp);
		check = true;
		return;
	}
	if(a[i + 1][j] && i < n)
	{
		solve(i + 1, j, temp + "D");
	}
	if(a[i][j + 1] && j < n)
	{
		solve(i, j + 1, temp + "R");
	}
	if((i < n && j < n && !a[i + 1][j] && !a[i][j + 1]) || i > n || j > n)
	{
		return;
	}
}
void result()
{
	if(!check)
	{
		cout << "-1\n";
	}
	else
	{
		int sz = res.size();
		sort(res.begin(), res.end());
		for(int i = 0; i < sz; i++)
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
		init();
		if(a[1][1] == 0 || a[n][n] == 0)
		{
			cout << "-1\n";
			continue;
		}
		solve(1, 1, "");
		result();
	}
	return 0;
}

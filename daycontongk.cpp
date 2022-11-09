#include <bits/stdc++.h>
using namespace std;
int a[50], check[50], n, k;
vector <vector <int> > res;

void init()
{
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	res.clear();
	sort(a, a + n + 1);
	memset(check, 0, sizeof(check));
}

void solve(int i)
{
	for(int j = 0; j < 2; j++)
	{
		check[i] = j;
		if(i == n)
		{
			int sum = 0;
			for(int m = 1; m <= n; m++)
			{
				sum += a[m] * check[m];
			}
			if(sum == k)
			{
				vector <int> temp;
				for(int m = 1; m <= n; m++)
				{
					if(check[m])
					{
						temp.push_back(a[m]);
					}
				}
				res.push_back(temp);
			}
		}
		else
		{
			solve(i + 1);
		}
	}
}
void result()
{
	if(res.size() == 0)
	{
		cout << "-1\n";
		return;
	}
	sort(res.begin(), res.end());
	for(int i = 0; i < res.size(); i++)
	{
		cout << "[" << res[i][0] << " ";
		for(int j = 1; j < res[i].size() - 1; j++)
		{
			cout << res[i][j] << " ";
		}
		cout << res[i][res[i].size() - 1] << "]" << " ";
	}
	cout << endl;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		init();
		solve(1);
		result();
	}
	return 0;
}

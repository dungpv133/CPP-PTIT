#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1009];
int n, temp;

bool cmp(int a, int b)
{
	return a < b;
}
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> temp;
			if(temp == 1)
			{
				ke[i].push_back(j);
			}
		}
	}
	for(int i = 0; i <= n; i++)
	{
		sort(ke[i].begin(), ke[i].end(), cmp);
	}
	for(int i = 1; i <= n; i++)
	{
		if(ke[i].size() > 0)
		{
			for(int j = 0; j < ke[i].size(); j++)
			{
				cout << ke[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

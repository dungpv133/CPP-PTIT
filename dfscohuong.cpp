#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1009];
bool chuaxet[1009];
int v, e, n;

void dfs(int nguon)
{
	chuaxet[nguon] = true;
	cout << nguon << " ";
	for(int i = 0; i < ke[nguon].size(); i++)
	{
		if(!chuaxet[ke[nguon][i]])
		{
			dfs(ke[nguon][i]);
		}
	}
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		for(int i = 0; i < 1009; i++)
		{
			ke[i].clear();
		}
		memset(chuaxet, 0, sizeof(chuaxet));
		cin >> v >> e >> n;
		for(int i = 0; i < e; i++)
		{
			int a, b;
			cin >> a >> b;
			ke[a].push_back(b);
		}
		dfs(n);
		cout << endl;
	}
	return 0;
}

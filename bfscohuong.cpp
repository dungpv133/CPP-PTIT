#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1009];
bool chuaxet[1009];
int v, e, u;

void bfs(int nguon)
{
	queue <int> hd;
	hd.push(nguon);
	chuaxet[nguon] = false;
	while(!hd.empty())
	{
		int temp = hd.front();
		hd.pop();
		cout << temp << " ";
		for(int i = 0; i < ke[temp].size(); i++)
		{
			if(chuaxet[ke[temp][i]])
			{
				hd.push(ke[temp][i]);
				chuaxet[ke[temp][i]] = false;
			}
		}
	}
	cout << endl;
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
		cin >> v >> e >> u;
		memset(chuaxet, 1, sizeof(chuaxet));
		for(int i = 0; i < e; i++)
		{
			int a, b;
			cin >> a >> b;
			ke[a].push_back(b);
		}
		bfs(u);
	}
	return 0;
}

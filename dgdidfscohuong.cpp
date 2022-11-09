#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1009];
int dinh, canh, u, v, truoc[1009];
bool xet[1009];

void init()
{
	for(int i = 0; i < 1009; i++)
	{
		ke[i].clear();
	}
	cin >> dinh >> canh >> u >> v;
	for(int i = 1; i <= canh; i++)
	{
		int a, b;
		cin >> a >> b;
		ke[a].push_back(b);
	}
	memset(xet, 0, sizeof(xet));
	memset(truoc, 0, sizeof(truoc));
}
void dfs(int x)
{
	for(int i = 0; i < ke[x].size(); i++)
	{
		if(!xet[ke[x][i]])
		{
			xet[ke[x][i]] = true;
			truoc[ke[x][i]] = x;
			dfs(ke[x][i]);
		}
	}
}
void result()
{
	if(!truoc[v])
	{
		cout << "-1" << endl;
		return;
	}
	vector <int> res;
	int temp = v;
	while(temp != u)
	{
		res.push_back(temp);
		temp = truoc[temp];
	}
	res.push_back(u);
	for(int i = res.size() - 1; i >= 0; i--)
	{
		cout << res[i] << " ";
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
		dfs(u);
		result();
	}
	return 0;
}

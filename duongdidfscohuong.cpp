#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1009];
int truoc[1009];
bool chuaxet[1009];

void dfs(int u, int v)
{
	if(chuaxet[v])
	{
		return;
	}
	chuaxet[u] = true;
	for(int i = 0; i < ke[u].size(); i++)
	{
		if(!chuaxet[ke[u][i]])
		{
			truoc[ke[u][i]] = u;
			dfs(ke[u][i], v);
		}
	}
}
void duong(int u, int v)
{
	if(!chuaxet[u])
	{
		cout << "-1" << endl;
		return;
	}
	vector <int> road;
	while(u != v)
	{
		road.push_back(u);
		u = truoc[u];
	}
	road.push_back(v);
	reverse(road.begin(), road.end());
	for(int i = 0; i < road.size(); i++)
	{
		cout << road[i] << " ";
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
	memset(chuaxet, 0, sizeof(chuaxet));
	memset(truoc, 0, sizeof(truoc));
	int nguon, dich, dinh, canh;
	cin >> dinh >> canh >> nguon >> dich;
	for(int i = 1; i <= canh; i++)
	{
		int a, b;
		cin >> a >> b;
		ke[a].push_back(b);
	}
		dfs(nguon, dich);
		duong(dich, nguon);
	}
		return 0;
}

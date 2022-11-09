#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1009];
int v, e;
int chuaxet[1009];
bool kt = false;

void init()
{
	cin >> v >> e;
	for(int i = 0; i < 1009; i++)
	{
		ke[i].clear();
	}
	memset(chuaxet, 0, sizeof(chuaxet));
	for(int i = 0; i < e; i++)
	{
		int a, b;
		cin >> a >> b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
	kt = false;
}
void solve(int u)
{
	chuaxet[u] = 1;
	for(int i = 0; i < ke[u].size(); i++)
	{
		if(!chuaxet[ke[u][i]])
		{
			solve(ke[u][i]);
		}
		else if(chuaxet[ke[u][i]] == 1)
		{
			kt = true;
		}
	}
	chuaxet[u] = 2;
}
void result()
{
	if(kt)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
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

#include <bits/stdc++.h>
using namespace std;
#define MAX 1009
int canh, dinh;
vector <int> ke[MAX];
int chuaxet[MAX];

void init()
{
	cin >> dinh >> canh;
	for(int i = 0; i < 1009; i++)
	{
		ke[i].clear();
	}
	memset(chuaxet, 1, sizeof(chuaxet));
	for(int i = 1; i <= canh; i++)
	{
		int a, b;
		cin >> a >> b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
}
void bfs(int u)
{
	queue <int> hd;
	chuaxet[u] = 0;
	hd.push(u);
	while(!hd.empty())
	{
		int temp = hd.front();
		hd.pop();
		for(int i = 0; i < ke[temp].size(); i++)
		{
			if(chuaxet[ke[temp][i]])
			{
				chuaxet[ke[temp][i]] = 0;
				hd.push(ke[temp][i]);
			}
		}
	}
}
void solve()
{
	int num = 0;
	for(int i = 1; i <= dinh; i++)
	{
		if(chuaxet[i])
		{
			num++;
			bfs(i);
		}
	}
	cout << num << endl;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		init();
		solve();
	}
	return 0;
}

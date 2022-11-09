#include <bits/stdc++.h>
using namespace std;
vector <int> first, second, ke[1009];
int n, m, u;
bool chuaxet[1009];

void readdata()
{
	first.clear();
	second.clear();
	for(int i = 0; i < 1009; i++)
	{
		ke[i].clear();
	}
	cin >> n >> m >> u;
	for(int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
}
void init()
{
	for(int i = 1; i <= n; i++)
	{
		chuaxet[i] = true;
	}
}
void bfs(int i)
{
	queue <int> hd;
	hd.push(i);
	chuaxet[i] = false;
	while(!hd.empty())
	{
		int temp = hd.front();
		hd.pop();
		for(int i = 0; i < ke[temp].size(); i++)
		{
			if(chuaxet[ke[temp][i]])
			{
				chuaxet[ke[temp][i]] = false;
				hd.push(ke[temp][i]);
				first.push_back(temp);
				second.push_back(ke[temp][i]);
			}
		}
	}
}
void result()
{
	int dem = first.size();
	if(dem != n - 1)
	{
		cout << "-1" << endl;
	}
	else
	{
			for(int i = 0; i < first.size(); i++)
		{
			cout << first[i] << " " << second[i] << endl;
		}
	}
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		readdata();
		init();
		bfs(u);
		result();
	}
	return 0;
}

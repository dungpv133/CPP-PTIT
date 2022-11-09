#include <bits/stdc++.h>
using namespace std;
int dinh, canh;
bool xet[1009];
vector <int> ke[1009];

void init()
{
	cin >> dinh >> canh;
	memset(xet, 0, sizeof(xet));
	for(int i = 0; i < 1009; i++)
	{
		ke[i].clear();
	}
	for(int i = 0; i < canh; i++)
	{
		int a, b;
		cin >> a >> b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
}
void bfs(int u, int v)
{
	queue <int> hd;
	hd.push(u);
	while(!hd.empty())
	{
		int temp = hd.front();
		hd.pop();
		if(temp == v)
		{
			cout << "YES" << endl;
			return;
		}
		for(int i = 0; i < ke[temp].size(); i++)
		{
			if(!xet[ke[temp][i]])
			{
				xet[ke[temp][i]] = true;
				hd.push(ke[temp][i]);
			}
		}
	}
	cout << "NO" << endl;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		init();
		int q;
		cin >> q;
		while(q--)
		{
			memset(xet, false, sizeof(xet));
			int x, y;
			cin >> x >> y;
			bfs(x, y);
		}
		cout << endl;
	}
	return 0;
}

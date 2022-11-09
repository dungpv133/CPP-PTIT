#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1009];
bool chuaxet[1009];

void bfs(int i)
{
	queue <int> hd;
	hd.push(i);
	while(hd.size() > 0)
	{
		int temp = hd.front();
		chuaxet[temp] = false;
		hd.pop();
		for(int i = 0; i < ke[temp].size(); i++)
		{
			if(chuaxet[ke[temp][i]])
			{
				hd.push(ke[temp][i]);
				chuaxet[ke[temp][i]] = false;
			}
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
		int u, v;
		cin >> u >> v;
		for(int i = 0; i < v; i++)
		{
			int dau, cuoi;
			cin >> dau >> cuoi;
			ke[dau].push_back(cuoi);
			ke[cuoi].push_back(dau);
		}
		memset(chuaxet, 1, sizeof(chuaxet));
		int dem = 0;
		for(int i = 1; i <= u; i++)
		{
			if(chuaxet[i])
			{
				dem++;
				bfs(i);
			}
		}
		for(int i = 1; i <= u; i++)
		{
			memset(chuaxet, 1, sizeof(chuaxet));
			chuaxet[i] = false;
			int tong = 0;
			for(int j = 1; j <= u; j++)
			{
				if(chuaxet[j])
				{
					tong++;
					bfs(j);
				}
			}
			if(tong > dem)
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

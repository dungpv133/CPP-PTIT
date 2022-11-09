#include <bits/stdc++.h>
using namespace std;
int dinh, canh;
vector <int> ke[1009];
bool chuaxet[1009];
vector < pair <int, int> > kq;

void rs()
{
	for(int i = 0; i < 1009; i++)
	{
		ke[i].clear();
	}
	memset(chuaxet, 1, sizeof(chuaxet));
}
void bfs(int u)
{
	queue <int> hd;
	hd.push(u);
	while(!hd.empty())
	{
		int s = hd.front();
		hd.pop();
		chuaxet[s] = false;
		for(int i = 0; i < ke[s].size(); i++)
		{
			if(chuaxet[ke[s][i]])
			{
				chuaxet[ke[s][i]] = false;
				hd.push(ke[s][i]);
			}
		}
	}
}
int tplt()
{
	int dem = 0;
	for(int i = 1; i <= dinh; i++)
	{
		if(chuaxet[i])
		{
			dem++;
			bfs(i);
		}
	}
	return dem;
}
void canhcau(int u, int res, vector < pair <int, int> > temp)
{
	for(int i = 0; i < canh; i++)
	{
		if(i != u)
		{
			ke[temp[i].first].push_back(temp[i].second);
			ke[temp[i].second].push_back(temp[i].first);
		}
	}
	int num = tplt();
	if(num > res)
	{
		if(temp[u].first < temp[u].second)
		{
			kq.push_back({temp[u].first, temp[u].second});
		}
		else
		{
			kq.push_back({temp[u].second, temp[u].first});
		}
	}
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		rs();
		kq.clear();
		cin >> dinh >> canh;
		vector < pair <int, int> > temp;
		for(int i = 1; i <= canh; i++)
		{
			int a, b;
			cin >> a >> b;
			temp.push_back({a, b});
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		int t1 = tplt();
		for(int i = 0; i < canh; i++)
		{
			rs();
			canhcau(i, t1, temp);
		}
		sort(kq.begin(), kq.end());
		for(int i = 0; i < kq.size(); i++)
		{
			cout << kq[i].first << " " << kq[i].second << " ";
		}
		cout << endl;
	}
	return 0;
}

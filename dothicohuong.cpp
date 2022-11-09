#include <bits/stdc++.h>
using namespace std;
int v, e;


int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		cin >> v >> e;
		vector <int> res[e + 9];
		for(int i = 0; i < e; i++)
		{
			int dinh, canh;
			cin >> dinh >> canh;
			res[dinh].push_back(canh);
		}
		for(int i = 1; i <= v; i++)
	{
		sort(res[i].begin(), res[i].end());
	}
	for(int i = 1; i <= v; i++)
	{
		cout << i << ": ";
		for(int j = 0; j < res[i].size(); j++)
		{
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
}
	return 0;
}

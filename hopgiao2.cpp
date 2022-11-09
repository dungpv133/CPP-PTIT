#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n, m;
		cin >> n >> m;
		int a[n + 9], b[m + 9];
		int c[n + m + 9], size = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			c[size] = a[i];
			size++;
		}
		for(int i = 0; i < m; i++)
		{
			cin >> b[i];
			c[size] = b[i];
			size++;
		}
		sort(c, c + size);
		vector <int> res;
		res.push_back(-1);
		for(int i = 0; i < size; i++)
		{
			if(c[i] >= 0)
			{
				cout << c[i] << endl;
			}
			int pos = i + 1;
			while(c[i] == c[pos])
			{
				c[i] = -1;
				pos++;
				if(c[i] != res[res.size() - 1])
				{
					res.push_back(c[i]);
				}
			}
		}
		cout << endl;
		for(int i = 1; i < res.size(); i++)
		{
			cout << res[i] << " ";
		}
		cout << endl;
		res.clear();
	}
	return 0;
}
